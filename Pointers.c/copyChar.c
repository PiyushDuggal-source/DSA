#include <stdio.h>
void copy_string(char *s, char *t)
{
    while (*s++ = *t++)
    {
    };
}
int main()
{
    char *a = "piyush";
    char b[sizeof(a)];

    copy_string(b, a);
    printf("word:%s and newWord:%s\n", a, b);
    return 0;
}