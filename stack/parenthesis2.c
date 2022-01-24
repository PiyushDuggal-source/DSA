#include <stdio.h>
#include <stdlib.h>

struct parenthesis
{
    int data;
    struct parenthesis *next;
};

struct parenthesis *top, *newEle;

void push(char *ele)
{
    printf("%c", ele[1]);
    // newEle  = (struct parenthesis *)malloc(sizeof(struct parenthesis));
    // newEle->data = ele;
}

void getEle()
{
    char expression[20];
    char *expp;
    expp  = expression;
    scanf("%s", expp);
    printf("%s", expression);
    push(expp);
}

int main()
{
    getEle();
    return 0;
}