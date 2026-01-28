#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num > 0) printf("Positive\n");
    else printf("Non-positive\n");
    for (int i = 1; i<=5;i++)
    {
        printf("/%d\n",i);
    }
    printf("%d\n", add(3,4));
    return 0;
}
int add(int a,int b) 
{
    return a + b;
}