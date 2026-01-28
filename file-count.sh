#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi


DIR="$1"

if [ ! -d "$DIR" ]; then
    echo "Error: Directory '$DIR' does not exist"
    exit 1
fi


LOG_FILE="file-count-results.log"


echo "File Count Report for: $DIR" | tee "$LOG_FILE"
echo "Generated on: $(date)" | tee -a "$LOG_FILE"
echo "----------------------------------------" | tee -a "$LOG_FILE"

echo "" | tee -a "$LOG_FILE"
echo "Files by Type:" | tee -a "$LOG_FILE"
echo "" | tee -a "$LOG_FILE"


find "$DIR" -type f | sed 's/.*\.//' | sort | uniq -c | sort -rn | while read count ext; do
    printf "%-10s : %5d files\n" "$ext" "$count" | tee -a "$LOG_FILE"
done


TOTAL=$(find "$DIR" -type f | wc -l)
echo "" | tee -a "$LOG_FILE"
echo "----------------------------------------" | tee -a "$LOG_FILE"
echo "Total files: $TOTAL" | tee -a "$LOG_FILE"

TOTAL_DIRS=$(find "$DIR" -type d | wc -l)
echo "Total directories: $TOTAL_DIRS" | tee -a "$LOG_FILE"

echo "" | tee -a "$LOG_FILE"
echo "Results saved to: $LOG_FILE"