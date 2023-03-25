#include <stdio.h>
int main()
{
    float pi = 3.14;
    int r;
    int h;
    printf("Enter the raidus of circle:");
    scanf("%d", &r);
    float c = pi * r * r;
    printf("The area of circle is %f\n", c);
    printf("Enter the height of cylinder:");
    scanf("%d", &h);
    float v = c * h;
    printf("The volume of cylinder is %f\n", v);
    return 0;
}