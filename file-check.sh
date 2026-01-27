#!/bin/bash
read -p "Enter a filename to check: " FILENAME
if [ -e "$FILENAME" ]; then
    echo "File exists"
    echo "Details:"
    ls -l "$FILENAME"
else
    echo "File does not exist"
fi