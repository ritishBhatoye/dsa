#!/bin/zsh

cd "$(dirname "$0")"  # repo root

# ===== Configurable cooldown (in seconds) =====
COOLDOWN_SECONDS=30
LAST_PUSH_FILE=".last_push_time"

# ===== Check for changes (staged or unstaged) =====
if git diff --quiet && git diff --cached --quiet; then
  echo "No changes to commit."
  exit 0
fi

# ===== Cooldown handling =====
now_ts=$(date +%s)
last_ts=0

if [[ -f "$LAST_PUSH_FILE" ]]; then
  # Read last timestamp safely
  read -r last_ts < "$LAST_PUSH_FILE" || last_ts=0
  # Fallback if file content is invalid
  if ! [[ "$last_ts" =~ ^[0-9]+$ ]]; then
    last_ts=0
  fi
fi

elapsed=$(( now_ts - last_ts ))

if (( last_ts != 0 && elapsed < COOLDOWN_SECONDS )); then
  echo "Push skipped — cooldown active. ($elapsed s elapsed, need $COOLDOWN_SECONDS s)"
  exit 0
fi

echo "Committing..."
git add .
if git commit -m "auto: save $(date '+%Y-%m-%d %H:%M:%S')"; then
  echo "Pushing..."
  if git push; then
    echo "Push successful."
    echo "$now_ts" > "$LAST_PUSH_FILE"
  else
    echo "Push failed."
  fi
else
  echo "Commit failed (maybe no staged changes)."
fi
