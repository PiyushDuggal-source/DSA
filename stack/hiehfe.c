#include <stdio.h>
#include <string.h>

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
    for (int i = 0; i != strlen(string); i++)
    {
        printf("%c", strptr[i]);
    }

    return 0;
}
