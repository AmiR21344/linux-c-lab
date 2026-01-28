#include <stdio.h>
int main() {
    int num1, num2, sum;
    
    printf("Enter first number: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    fflush(stdout);
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    
    return 0;
}