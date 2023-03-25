#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("you Entered 1\n");
    }
    else if (n == 2)
    {
        printf("you entered 2\n");
    }
    else if (n == 3)
    {
        printf("you entered 3\n");
    }
    else
    {
        printf("none of the above\n");
    }
}