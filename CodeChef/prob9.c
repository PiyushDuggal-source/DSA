#include <stdio.h>
#define MAX_NUMBER 100000
int main()
{
    // You are given a list of N integers and you need to reverse it and print the reversed list in a new line.
    int n, num[MAX_NUMBER];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d ", num[j]);
    }
    return 0;
}