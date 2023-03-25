#include <stdio.h>
int main()
{
    int x = 4;
    int y = 5;
    printf("The value of 3*x-4*y is %d\n", 3 * x - 4 * y);
    printf("The value of 3*(x-4*y) is %d\n", 3 * (x - 4 * y));
    // be careful with the associative property during bodmas rule
    printf("The value of 3*x/y*2 is %d\n", 3 * x / y * 2);
    printf("The value of 3*x/y*2 is %d\n", (3 * x) / (y * 2));
}