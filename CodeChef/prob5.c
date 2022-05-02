#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int m[n];

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            m[count] = i;
            count++;
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", m[i]);
    }

    return 0;
}
