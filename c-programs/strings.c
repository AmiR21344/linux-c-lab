#include <string.h>
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    fprintf(file, "Text");
    fclose(file);
    return 0;
}