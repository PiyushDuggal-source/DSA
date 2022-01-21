#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newNode;

int create()
{
    int choice, length = 0;

    printf("Enter 0 to stop or any number to create: ");
    scanf("%d", &choice);
    while (choice != 0)
    {
        length++;
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        if (head == 0)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Enter 0 to stop or any number to create: ");
        scanf("%d", &choice);
    }

    return length;
}

int addAtTheEnd()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d", &newNode->data);
    int len = 0;
    printf("%d", temp);
    temp = head;
    printf("%d", head);

    while (temp != 0)
    {
        len++;
        temp = temp->next;
    }
    temp->next = newNode;
    printf("\n%d", len);

    return len;
}

void display(int length)
{
    temp = head;
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int length = create();
    create();
    display(length);
    addAtTheEnd();
    display(length + 1);

    return 0;
}