#!/bin/zsh

cd "$(dirname "$0")"  # repo root

while true; do
  fswatch -1 .  # wait for any change in the repo
  git add .
  git commit -m "auto: save $(date '+%Y-%m-%d %H:%M:%S')" || continue
  git push
done