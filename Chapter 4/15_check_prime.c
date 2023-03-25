#include <stdio.h>
int main()
{
    int n, prime = 1;
    printf("Enter the number    ");
    scanf("%d", &n);
    // for (int i = 2; 2 * i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }
    // if (prime == 0 && n != 2)
    // {
    //     printf("%d is  a  notprime number\n", n);
    // }
    // else
    // {
    //     printf("%d is  a prime number  ", n);
    // }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 1 || n == 2)
    {
        printf("prime is %d\n", n);
    }
    else
    {
        printf("%d is not prime\n", n);
    }
    // if (n == 0 && n < 0 && n != 1)
    // {
    //     printf("Enter a valid number ");
    // }
    // else if (n == 1)
    // {
    //     printf("1 is a  neither prime nor composit\n");
    // }
    // 101582811
    // 6223558000334
    // 6223558000023
    // 6223558000604
    return 0;
}
