#!/bin/bash
trap "echo Error!" ERR

# Command that might fail
ls /nonexistent-directory

echo "This line might not execute if error occurs"
