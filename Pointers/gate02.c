#include <stdio.h>

int main()
{
    char c[] = "gate2011";
    char *p = c;
    // let  ASCII value of A is X then the p[3] which is E will become X + 4
    // p[1] which is A, X will be substracted from X + 4
    // hence, it will print p + 4
    printf("%s", p + p[3] - p[1]);

    return 0;
}

// Options
// 1. GATE2011
// 2. E2011
// 3. 2011               THIS IS CORRECT
// 4. 011