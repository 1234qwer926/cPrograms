#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age > 17)
    {
        printf("You can drivr\n");
    }
    else
    {
        printf("You canot drive\n");
    }
    return 0;
}