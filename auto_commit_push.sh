#!/bin/zsh

cd "$(dirname "$0")"  # repo root

# Only commit if there are any changes (staged or unstaged)
if git diff --quiet && git diff --cached --quiet; then
  echo "No changes to commit."
  exit 0
fi

git add .
git commit -m "auto: save $(date '+%Y-%m-%d %H:%M:%S')" && git push