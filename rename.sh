#!/bin/bash

# Clean epitech pools folders name that had git repo's name

for dir in B-*; do
  clean_name=$(echo "$dir" | sed -E 's/^B-[A-Z0-9\-]+-([a-zA-Z0-9]+).*$/\1/')
  
  if [ -d "$clean_name" ]; then
    echo "⚠️  Le dossier '$clean_name' existe déjà, on saute '$dir'"
    continue
  fi

  echo "✅ Renommage : '$dir' → '$clean_name'"
  mv "$dir" "$clean_name"
done
