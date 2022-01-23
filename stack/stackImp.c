#include <stdio.h>
#include <stdbool.h>

int stack[5];
int top = -1;

void push()
{
    if (top == 4)
    {
        printf("stack is overFlowing");
    }
    else
    {
        int ele;
        printf("Enter the element: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("The stack is underflowing\n");
    }
    else
    {
        printf("%d\n", stack[top]);
        top--;
    }
}

bool isFull()
{
    if (top == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmply()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void peek()
{
    printf(isEmply() ? "The stack is emply" : "peek this - %d\n", stack[top]);
}

void display()
{
    if (isEmply())
    {
        printf("The stack is emply");
    }
    else
    {

        for (int i = 0; i <= top; i++)
        {
            printf("ele %d is %d\n", i, stack[i]);
        }
    }
}
int main()
{
    int choice;
    printf("Enter 1-> push, 2-> pop, 3-> peek, 4-> display, 5-> exit: ");

    scanf("%d", &choice);
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
        printf("Enter 1-> push, 2-> pop, 3-> peek, 4-> display, 5-> exit: ");
        scanf("%d", &choice);
    }
    // push();
    // // pop();
    // push();
    // push();
    // push();
    // peek();
    // display();
    // // printf("%d\n", isFull());
    // // printf("%d\n", isEmply());

    return 0;
}