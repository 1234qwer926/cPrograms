#include <stdio.h>
int main()
{
    int a;
    for (a = 0; a < 10; ++a)
    {
        printf("%d\n", a + 1);
    }
    // reverse printing the numbers
    for (int i = 10; i; --i)
        printf("%d\n", i);
}