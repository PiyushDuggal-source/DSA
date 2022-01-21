#include <stdio.h>

int main()
{
    /*You're given a number N. Print the first N lines of the below-given pattern.

           *
          **
        ***
       ****
     *****
    */

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}