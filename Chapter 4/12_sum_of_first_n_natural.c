#include <stdio.h>
int main()
{
    int i = 0, sum = 0, n = 10;
    //  using for loop
    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("Using the for loop %d\n", sum);
    // // using while loop
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // printf("using while loop %d\n", sum);
    // // using do while loop
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("Using the do while loop %d\n", sum);
}