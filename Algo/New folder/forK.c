#include <stdio.h>

int main()
{
    // This program's time complexity will be root(n) because:
    /* i .... K
        p .... k(k+1)/2
        when p > n
        k^2 > n
        k = root(n)

        time complexity will be root(n)
    */
    int i, n = 15, s = 0, p = 0;
    for (i = 0; p <= n; i++)
    {
        s += 1;
        printf("%d\n", s);
        p = p + i;
    }
    printf("%d", p);

    return 0;
}