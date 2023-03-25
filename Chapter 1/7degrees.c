#include <stdio.h>
int main()
{
    float f, c;
    // convertion from celsius to farenheit
    printf("Enter the celsius temperature: ");
    scanf("%f", &c);
    printf("The farenheit temperature is :%f\n", ((c * 9) / 5) + 32);
    printf("Enter the farenheit temperature: ");
    scanf("%f", &f);
    printf("The celsius temperature is :%f\n", (f - 32) * 5 / 9);
    return 0;
}