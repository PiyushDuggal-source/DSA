#include <stdio.h>

void f(int *p, int *q)
{
    p = q;
    *p = 2;
}

int i = 0, j = 1;
int main()
{
    f(&i, &j);
    printf("%d %d\n", i, j);
}

// OPTIONS

// 1 - 2 2
// 2 - 2 1
// 3 - 0 1
// 4 - 0 2 THIS IS CORRECT