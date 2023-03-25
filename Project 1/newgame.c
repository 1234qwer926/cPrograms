#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, etmp = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("%d\n", number);
    do
    {
        printf("Enter the number between 1 to 100:");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("higher number please!   \n");
        }
        else if (guess > number)
        {
            printf("lower number plaese! \n");
        }
        else
        {
            printf("You gussed in %d attempts\n", etmp);
        }
        etmp++;

    } while (guess != number);
}