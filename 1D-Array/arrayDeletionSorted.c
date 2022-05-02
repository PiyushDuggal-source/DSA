#include <stdio.h>

// Time complexity will be O(n)

int main()
{
    int a[50], num, pos, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the ele: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("no. %d ele: %d\n", i, a[i]);
    }

    printf("Enter the number position which u want to delete: ");
    scanf("%d", &pos);
    if (pos > size)
    {
        printf("invalid");
    }
    else
    {
        for (int i = pos - 1; i <= size - 2; i++)
        {
            a[i] = a[i + 1];
        }

        size--;
        for (int i = 0; i < size; i++)
        {
            printf("no. %d ele: %d\n", i, a[i]);
        }
    }
    return 0;
}