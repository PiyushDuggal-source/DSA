#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = 0;

void push()
{
    struct stack *newNode;
    printf("Enter the element: ");
    newNode = (struct stack *)malloc(sizeof(struct stack));
    scanf("%d", &newNode->data);
    newNode->next = top;
    top = newNode;
}

void display()
{
    struct stack *temp;
    temp = top;
    while (temp != 0)
    {
        printf("ele - %d\n", temp->data);
        temp = temp->next;
    }
}

void pop()
{
    struct stack *temp;
    temp = top;
    top = top->next;
    printf("%d\n", temp->data);
    free(temp);
}

void peek()
{
    printf("%d", top->data);
}

int main()
{
    push();
    push();
    push();
    display();
    pop();
    push();
    display();
    peek();

    return 0;
}