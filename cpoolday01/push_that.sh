#!/bin/bash

git add --all
echo "Commit message"
read c
git commit -m "$c" 
git push origin $1
