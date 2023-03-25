#include <stdio.h>
int main()
{
    int a = 5;
    printf("%d\n", a);
    printf("%d\n", a++);     // a++ fiirst prin then inc
    printf("%d\n", a--);     // a--
    printf("%d\n", ++a);     //++a first inc and print
    printf("%d\n", --a);     //--a
    printf("%d\n", a += 10); // increment by 10
    printf("%d\n", a -= 10); // decrement by 10
    printf("%d\n", a /= 1);  // a=a/1
    printf("%d\n", a *= 5);  // a=a*5
}