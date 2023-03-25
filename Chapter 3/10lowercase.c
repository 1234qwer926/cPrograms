#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("%c is a lowecase", ch);
    }
    else
    {
        printf("%c is not a lowercase", ch);
    }
}