#include <stdio.h>

void home(char *hi)
{
    printf("%c", hi[2]);
}

int main()
{
    char string[10];
    char *strptr = string;

    printf("Enter something: ");
    scanf("%s", strptr);
    home(string);

    printf("The string you entered is %s\n", string);

    return 0;
}
