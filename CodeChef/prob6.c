#include <stdio.h>

int main()
{
    // Given three distinct integers A, B and C, print the second largest number among them.
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    else if (b >= c)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if (a >= b)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", b);
        }
    }
    return 0;
}