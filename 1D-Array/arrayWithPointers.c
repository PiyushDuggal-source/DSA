#include <stdio.h>

int main()
{
    int a[20], size, *p;
    p = a;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the ele: ");
        scanf("%d", &a[i]); // (a+i), (p+i)
    }

    for (int i = 0; i < size; i++)
    {
        printf("no. %d ele: %d\n", i, a[i]);
        printf("with dereferencing: %d\n", *(p + i)); // *(a + i),
    }

    return 0;
}