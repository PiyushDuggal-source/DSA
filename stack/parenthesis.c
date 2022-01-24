#include <stdio.h>
#include <stdlib.h>

#define max 20
void pop();
struct parenthesisStack
{
    char ele;
    struct parenthesisStack *next;
};
struct parenthesisStack *newEle, *top;

int isEntered = 0;

void isValid(char *expp, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (expp[i] == '(')
        {
            newEle = (struct parenthesisStack *)malloc(sizeof(struct parenthesisStack));
            newEle->ele = expp[i];
            newEle->next = top;
            top = newEle;
            isEntered = 1;
        }
        if (expp[i] == ')')
        {
            if (isEntered == 0)
            {
                printf("The expression is wrong");
                break;
            }
            else
            {
                pop();
            }
        }
    }
}
char getTheExp()
{
    char exp[30];
    int length;
    char *expP = exp;
    printf("Enter the expression: ");
    scanf("%s", expP);
    scanf("%d", &length);
    isValid(exp, length);
}

void pop()
{
    struct parenthesisStack *temp;
    temp = top;
    top = top->next;
    printf("%d\n", temp->ele);
    free(temp);
}

int main()
{
    getTheExp();

    return 0;
}