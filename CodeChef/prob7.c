#include <stdio.h>

int main()
{
    // You're given two numbers L and R. Print all odd numbers between L and R (both inclusive)
    //  in a single line separated by space, in ascending (increasing) order
    int l, r;
    scanf("%d", &l);
    scanf("%d", &r);

    for (l; l <= r; l++)
    {
        if (l % 2 == 1)
        {
            printf("%d ", l);
        }
    }

    return 0;
}