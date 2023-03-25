#include <stdio.h>
int main()
{
    int math, phy, chem;
    float total;
    printf("Enter the math marks: \n ");
    scanf("%d", &math);
    printf("Enter the phy marks: \n ");
    scanf("%d", &phy);
    printf("Enter the chem marks: \n ");
    scanf("%d", &chem);
    total = (math + phy + chem) / 3;
    if ((total < 40) || (math < 33) || (phy < 33) || (chem < 33))
    {
        printf("your fail with %f", total);
    }
    else
    {
        printf("you passed with %f", total);
    }
}