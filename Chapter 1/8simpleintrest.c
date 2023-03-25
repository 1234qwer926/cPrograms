#include <stdio.h>
int main()
{
    float p, t, r, s;
    printf("Enter the principalvalue:");
    scanf("%f", &p);
    printf("Enter the timevalue:");
    scanf("%f", &t);
    printf("Enter the rate of interst:");
    scanf("%f", &r);
    s = (p * t * r) / 100;
    printf("The simple intrest is : %f\n", s);
    return 0;
}