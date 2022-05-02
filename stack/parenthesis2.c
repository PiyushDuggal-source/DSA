#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct parenthesis
{
    char data;
    struct parenthesis *next;
};

struct parenthesis *top, *newEle, *temp;
void push(char *ele)
{
    printf("dsadas - %s", ele);
    newEle = (struct parenthesis *)malloc(sizeof(struct parenthesis));
    strcpy(newEle->data, ele);
    newEle->next = 0;
    top = temp = newEle;
}

bool pop(int len)
{
    if (top == 0)
    {
        return false;
    }
    else
    {
        struct parenthesis *last;
        temp = top;
        for (int i = 0; i < len - 2; i++)
        {
            temp = temp->next;
        }
        last = temp->next;
        temp->next = 0;
        free(last);
        printf("element is deleted");
    }
}

void getEle()
{
    char expression[20];
    char *expp;
    expp = expression;
    printf("Enter the expression: ");
    scanf("%s", expp);

    for (int i = 0; i < strlen(expression); i++)
    {
        if (expp[i] == '(')
        {
            push((expp + i));
        }
        else if (expp[i] == ')')
        {
            pop(strlen(expression));
        }
    }
}

int main()
{
    getEle();
    return 0;
}