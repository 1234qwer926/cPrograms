#include <stdio.h>
int main()
{
    int i = 1, n, fact = 1;
    printf("Enter the number");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     fact *= i;
    // }
    // printf("The factorial of %d is %d\n", n, fact);
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, fact);
}