#include <stdio.h>
int main()
{
    int a = 0;
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", ++a);
    } while (a < num);
}