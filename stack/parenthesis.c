#include <stdio.h>
#include <stdlib.h>

struct parenthesis
{
    int data;
    struct parenthesis *next;
};

struct parenthesis *top, *newEle;

void push(char ele)
{
    printf("%c", ele);
    // newEle  = (struct parenthesis *)malloc(sizeof(struct parenthesis));
    // newEle->data = ele;
}

void getEle()
{
    char expression;
    char *expp = expression;
    scanf("%c", expp);
    printf("%c", expp[1]);
}

int main()
{
    getEle();
    return 0;
}