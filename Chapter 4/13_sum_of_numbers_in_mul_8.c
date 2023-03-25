#include <stdio.h>
int main()
{
    int sum = 0, i, c;

    for (i = 0; i <= 10; i++)
    {
        c = 8 * i;
        sum += c;
    }
    printf("%d\n", sum);
}