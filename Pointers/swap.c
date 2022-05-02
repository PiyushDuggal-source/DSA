#include <stdio.h>

int swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;

    printf("a = %d\n", *p);
    printf("b = %d\n", *q);
}

int main()
{
    int a = 5, b = 4;

    swap(&a, &b);
    return 0;
}