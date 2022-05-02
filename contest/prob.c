#include <stdio.h>
#define max 100000
int main()
{
    int tests, x, y, z;
    int a[max];
    scanf("%d", &tests);
    for (int i = 0; i < tests; i++)
    {
        scanf("%d %d", &x, &y);
        z = x - y;
        if (z > y)
        {
            a[i] = y;
        }
        else
        {
            a[i] = z;
        }
    }

    for (int j = 0; j < tests; j++)
    {
        printf("%d\n", a[j]);
    }

    return 0;
}