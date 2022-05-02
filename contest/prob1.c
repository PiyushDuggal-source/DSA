#include <stdio.h>
#include <string.h>
int main()
{
    int tests, x, y, z;
    char food[100][100];
    scanf("%d", &tests);
    for (int i = 0; i < tests; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x < y && x < z)
        {
            strcpy(food[i], "NOTHING\n");
        }
        else if (x >= y)
        {
            strcpy(food[i], "PIZZA\n");
        }
        else
        {
            strcpy(food[i], "BURGER\n");
        }
    }

    for (int j = 0; j < tests; j++)
    {
        printf("%s", food[j]);
    }

    return 0;
}