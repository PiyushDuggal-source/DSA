#include <stdio.h>
#define MAX_NUMBER 100000
int main()
{
    // You are given a list of N integers and a value K. Print 1 if K exists in the given list of N integers, otherwise print −1.
    int n, k, a[MAX_NUMBER], isThere = -1;

    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (a[j] == k)
        {
            isThere = 1;
            break;
        }
    }
    printf("%d", isThere);

    return 0;
}