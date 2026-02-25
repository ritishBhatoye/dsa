#!/bin/zsh

cd "$(dirname "$0")" || exit 1  # repo root

# ===== Configurable interval / cooldown (in seconds) =====
COOLDOWN_SECONDS=30
LAST_PUSH_FILE="$(pwd)/.last_push_time"

while true; do
  now_ts=$(date +%s)
  last_ts=0

  # ===== Read last push timestamp safely =====
  if [[ -f "$LAST_PUSH_FILE" ]]; then
    read -r last_ts < "$LAST_PUSH_FILE" || last_ts=0
    [[ "$last_ts" =~ ^[0-9]+$ ]] || last_ts=0
  fi

  elapsed=$(( now_ts - last_ts ))

  if (( last_ts != 0 && elapsed < COOLDOWN_SECONDS )); then
    echo "[$(date '+%H:%M:%S')] Cooldown active ($elapsed / $COOLDOWN_SECONDS s), skipping push."
  else
    # ===== Check for changes (staged or unstaged) =====
    if git diff --quiet && git diff --cached --quiet; then
      echo "[$(date '+%H:%M:%S')] No changes to commit."
    else
      echo "[$(date '+%H:%M:%S')] Committing..."
      git add .

      if git commit -m "auto: save $(date '+%Y-%m-%d %H:%M:%S')"; then
        echo "[$(date '+%H:%M:%S')] Pushing..."
        if git push; then
          echo "[$(date '+%H:%M:%S')] Push successful."
          printf "%s\n" "$now_ts" > "$LAST_PUSH_FILE"
        else
          echo "[$(date '+%H:%M:%S')] Push failed."
        fi
      else
        echo "[$(date '+%H:%M:%S')] Commit failed."
      fi
    fi
  fi

  sleep "$COOLDOWN_SECONDS"
done