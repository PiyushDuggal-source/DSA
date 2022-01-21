// #include <stdio.h>

// int main()
// {
//     /*
//     You're given the length of three sides a, b, and c respectively. Now If these three
//     sides can form an Equilateral Triangle then print 1, if these three sides can form an
//      Isosceles Triangle then print 2, if these three sides can form a Scalene Triangle then
//       print 3, otherwise print −1.*/
//     int a, b, c;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     scanf("%d", &c);

//     if (a + b > c && b + c > a && c + a > b)
//     {
//         if (a == b && b == c)
//         {

//             printf("1");
//         }
//         else if (a == b || b == c || c == a)
//         {

//             printf("2");
//         }
//         else
//         {
//             printf("1");
//         }
//     }
//     else
//     {
//         printf("-1");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b, c, area, sp, flag = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a + b > c && b + c > a && c + a > b)
    {

        if (a == b && b == c && a == c)
        {
            printf("1");
        }
        else if (a != b && a != c && b != c)
        {
            printf("3");
        }
        else
        {
            printf("2");
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}