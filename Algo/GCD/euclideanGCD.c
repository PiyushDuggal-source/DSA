#include <stdio.h>

int euclideanGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    int c;
    c = a % b;
    return euclideanGCD(b, c);
}

int main()
{
    int m = euclideanGCD(3918848, 1653264);
    printf("%d", m);

    return 0;
}