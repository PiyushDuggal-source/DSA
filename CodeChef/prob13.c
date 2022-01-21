#include <stdio.h>

int main()
{
    // You are given a number N. Find the sum of all numbers from 1 to N.
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}