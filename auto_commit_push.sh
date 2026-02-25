#!/bin/zsh

cd "$(dirname "$0")" || exit 1  # repo root

# ===== Configurable cooldown (in seconds) =====
COOLDOWN_SECONDS=30
LAST_PUSH_FILE="$(pwd)/.last_push_time"

now_ts=$(date +%s)
last_ts=0

# ===== Read last push timestamp safely =====
if [[ -f "$LAST_PUSH_FILE" ]]; then
  read -r last_ts < "$LAST_PUSH_FILE" || last_ts=0
  [[ "$last_ts" =~ ^[0-9]+$ ]] || last_ts=0
fi

elapsed=$(( now_ts - last_ts ))

if (( last_ts != 0 && elapsed < COOLDOWN_SECONDS )); then
  echo "Push skipped — cooldown active. ($elapsed s elapsed, need $COOLDOWN_SECONDS s)"
  exit 0
fi

# ===== Check for changes (staged or unstaged) =====
if git diff --quiet && git diff --cached --quiet; then
  echo "No changes to commit."
  exit 0
fi

echo "Committing..."
git add .

if git commit -m "auto: save $(date '+%Y-%m-%d %H:%M:%S')"; then
  echo "Pushing..."
  if git push; then
    echo "Push successful."
    printf "%s\n" "$now_ts" > "$LAST_PUSH_FILE"
  else
    echo "Push failed."
  fi
else
  echo "Commit failed."
fi