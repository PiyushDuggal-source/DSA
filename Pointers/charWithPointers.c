#include <stdio.h>

int main()
{
    //  1st
    char a[] = "piyush";
    // 2nd
    char *p = "piyush";

    // Difference between 1st and 2nd:
    // 1. p will point at the first address of the string and we can use the p as same as a: p[4] will be "s";
    // 2. we cannot modify the value using pointer
    return 0;
}