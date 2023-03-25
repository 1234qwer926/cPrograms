#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter b number: \n");
    scanf("%d", &b);
    printf("Enter c number: \n");
    scanf("%d", &c);
    printf("Enter d number: \n");
    scanf("%d", &d);
    if ((a > b) && (a > c) && (a > d))
    {
        printf("%d is the largest", a);
    }
    else if ((b > c) && (b > d) && (b > a))
    {
        printf("%d is the largest", b);
    }
    else if ((c > d) && (c > a) && (c > b))
    {
        printf("%d is the largest", c);
    }
    else
    {
        printf("%d is the largest", d);
    }
}