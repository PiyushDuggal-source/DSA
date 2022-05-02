#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    (a % 11 == 0 && a % 5 == 0) ? printf("BOTH") : (a % 5 == 0 || a % 11 == 0) ? printf("ONE")
                                                                               : printf("NONE");
    return 0;
}