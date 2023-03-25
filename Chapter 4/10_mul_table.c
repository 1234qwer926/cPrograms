#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("Enter the number of multiplication table:   ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
}