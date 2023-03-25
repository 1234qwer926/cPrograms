#include <stdio.h>
int main()
{
    int age;
    int pass = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    if ((age > 17 && age < 80) || (pass == 1))
    {
        printf("You can drive a car\n");
    }
    else
    {
        printf("you cant drive a car\n");
    }
}