#include <stdio.h>

int main()
{

    int a[2][4];
    int *p;
    p = &a[0][0]; // or a[0]
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("insert ele in %dth row and %dth column: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("ele in %dth row and %dth column: %d\n", i, j, *(*(a + i) + j)); //*(a[i]+j)
        }
    }
    printf("%d\n", (a[0] - a[1]));
    printf("%d\n", a + 1);
    printf("%d\n", *(a + 1));
    printf("%d", a[0]);

    // This statement will print address of the array = p / a / &a / *a / &a[0][0] / a[0]
    return 0;
}