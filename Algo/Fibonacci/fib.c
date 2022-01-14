#include <stdio.h>

int main()
{
    int i = 2, n = 25, arr[25];
    arr[0] = 0;
    arr[1] = 1;

    for (i; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d\n", arr[i]);
    }

    printf("value is: %d", arr[n - 1]);

    return 0;
}