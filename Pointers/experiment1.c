#include <stdio.h>

int main()
{
    int a[5];
    char *b;
    b = a;
    int byte = 4;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("ele = %d\n", *(b + j * byte));
    }
    return 0;
}