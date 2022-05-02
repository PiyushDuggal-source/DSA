#include <stdio.h>

int main()
{
    /*You're given the length of three sides a, b, and c respectively. Now check if these three sides
    can form a triangle or not. Print "YES"(without quotes) if it can form a valid triangle with an area
     greater than 0, otherwise print "NO" (without quotes).*/

    int a, b, c;
    float s, area;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    s = (float)(a + b + c) / 2;
    area = s * ((s - a) * (s - b) * (s - c));
    if (area > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}