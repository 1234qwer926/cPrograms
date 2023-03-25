// income tax problem
#include <stdio.h>
int main()
{
    float tax, a = 0;
    printf("Enter the income : \n ");
    scanf("%f", &tax);
    if (tax >= 250000 && tax <= 500000)
    {
        a = a + 0.05 * (tax - 250000);
    }
    if (tax > 500000 && tax <= 1000000)
    {
        a = a + 0.20 * (tax - 500000);
    }
    if (tax > 1000000)
    {
        a = a + 0.30 * (tax - 1000000);
    }
    printf("amount should be paid is %f\n", a);
    return 0;
}
