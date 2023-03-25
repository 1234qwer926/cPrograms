#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d", &a);
    printf("Divisibility test is %d\n", a % 97);
}