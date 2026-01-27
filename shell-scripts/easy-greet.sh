#!/bin/bash
# easy-greet.sh - Greets user with current date

echo "========================================"
echo "        Easy Greet Application"
echo "========================================"
echo ""

# Get user input
read -p "Enter your name: " USERNAME

# Get current date and time
CURRENT_DATE=$(date +"%Y-%m-%d")
DAY_OF_WEEK=$(date +"%A")
CURRENT_TIME=$(date +"%H:%M:%S")

# Display greeting with date
echo ""
echo "========================================"
echo "Hello, $USERNAME!"
echo "Today is: $DAY_OF_WEEK, $CURRENT_DATE"
echo "Current time: $CURRENT_TIME"
echo "========================================"
echo "Have a great day! 🌟"
