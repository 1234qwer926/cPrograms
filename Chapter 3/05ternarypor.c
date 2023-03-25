#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    (a > 5) ? printf("Number is greater than 5\n") : printf("Number is less than 5\n");
}