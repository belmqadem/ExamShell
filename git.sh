#!/bin/sh

MSG=$1
git add .
git commit -m "$MSG"
git push