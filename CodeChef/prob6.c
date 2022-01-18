#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b && b < c)
    {
        printf("%d", b);
    }
    else if (a > b && a < c)
    {
        printf("%d", a);
    }
    else if (c > b && c < a)
    {
        printf("%d", c);
    }
    return 0;
}