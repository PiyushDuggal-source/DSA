#include <stdio.h>

// Time complexity will be O(n)

int main()
{
    int a[50], size, num, pos;

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

    printf("Enter the number you want to put: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > size)
    {
        printf("invalid");
    }
    else
    {
        for (int i = size; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = num;
        size++;
        for (int i = 0; i < size; i++)
        {
            printf("no. %d ele: %d\n", i, a[i]);
        }
    }
    return 0;
}
