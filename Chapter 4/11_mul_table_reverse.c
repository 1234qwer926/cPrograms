#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (n != 0; n; --n)
    {
        printf("%d * %d = %d\n", 10, n, n * 10);
    }
}