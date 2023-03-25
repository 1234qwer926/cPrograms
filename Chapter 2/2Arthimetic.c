#include <stdio.h>
#include <math.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("The value of a+b is %d\n", a + b);
    printf("The value of a-b is %d\n", a - b);
    printf("The value of a*b is %d\n", a * b);
    printf("6/5 is %d\n", 6 / 5);
    printf("The value of a/b is %d\n", a / b);
    int z;
    z = a * b; // legal value
    // a*b=z; illegal value
    printf("The value of z is %d\n", z);
    printf("5by2 is %d\n", 5 % 2);
    printf("5by-2 is %d\n", 5 % -2);
    printf("-5by3 is %d\n", -5 % 3);
    printf("The 4 to the power 5 is %f\n", pow(2, 5));
    // type convertions
    printf("6+5 is %d\n", 6 + 5);
    printf("6/5 is %f\n", 6.0 / 5);
    printf("6/5 is %d\n", 6 / 5);
    printf("6+5 is %f\n", 6.0 + 5);

    printf("3.0/9 is %f\n", 3.0 / 9);

    return 0;
}