// #include <stdio.h>

// int main()
// {
//     /*You are given a number N and find the sum of the first N odd and even numbers
//      in a line separated by space. All even and odd numbers should be greater than 0.*/
//     int n, eveSum = 0, oddSum = 0;
//     scanf("%d", &n);

//     oddSum = n * n;
//     eveSum = oddSum + n;
//     printf("%d %d", oddSum, eveSum);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, eveSum = 0, oddSum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 0)
        {
            eveSum = eveSum + i;
        }
        else
        {
            oddSum = oddSum + i;
        }
    }
    printf("%d %d", oddSum, eveSum);
    return 0;
}