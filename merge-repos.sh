#!/bin/bash

MONOREPO_NAME="epitech-piscine-merged"

PROJECTS=(
  bistromatic
  BSQ
  countisland
  cpoolday01
  cpoolday02
  cpoolday03
  cpoolday04
  cpoolday05
  cpoolday06
  cpoolday07
  cpoolday08
  cpoolday09
  cpoolday10
  cpoolday11
  cpoolday12
  cpoolday13
  finalstumper
  infinadd
  myprintf
  navy
  rush1
  rush2
  star
)

if ! command -v git filter-repo &> /dev/null; then
  echo "❌ git-filter-repo is not installed. Please install it first:"
  echo "https://github.com/newren/git-filter-repo"
  exit 1
fi

mkdir "$MONOREPO_NAME"
cd "$MONOREPO_NAME"
git init
cd ..

echo "✅ Created monorepo: $MONOREPO_NAME"
echo "------------------------------"

for project in "${PROJECTS[@]}"; do
  echo "📦 Processing $project..."

  if [ ! -d "$project/.git" ]; then
    echo "⚠️  Skipping '$project' — not a Git repo."
    continue
  fi

  cp -r "$project" "${project}_temp"
  cd "${project}_temp"

  git filter-repo --to-subdirectory-filter "$project" --force

  cd "../$MONOREPO_NAME"

  git remote add "$project" "../${project}_temp"
  git fetch "$project"
  git merge --allow-unrelated-histories "$project/master" -m "Merge $project into monorepo"
  git remote remove "$project"

  cd ..

  rm -rf "${project}_temp"

  echo "✅ $project merged successfully"
  echo "------------------------------"
done

echo "🎉 All projects successfully merged into $MONOREPO_NAME/"
