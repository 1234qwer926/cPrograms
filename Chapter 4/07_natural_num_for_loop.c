#include <stdio.h>
int main()
{
    int a = 0, num;
    printf("Enter any number:  ");
    scanf("%d", &num);
    for (a = 0; a < num; a++)
    {
        printf("%d\n", a + 1);
    }
    int i = 0, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (n != i; n; --n)
    {
        printf("%d\n", n);
    }
}