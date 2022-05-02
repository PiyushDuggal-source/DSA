#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *temp, *newNode;
    int nodeSize;
    head = 0;

    printf("Enter the size of node: ");
    scanf("%d", &nodeSize);
    for (int i = 0; i < nodeSize; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the %d element: ", i);
        scanf("%d", &newNode->data);
        newNode->next = 0;
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("%d\n", temp);

    printf("Enter the element you want to add at the end: ");
    newNode = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &newNode->data);
    temp->next = newNode;
    temp = newNode;

    printf("last ele- %d\n", temp);
    temp = head;
    for (int j = 0; j < nodeSize + 1; j++)
    {
        printf("data - %d with add - %d\n", temp->data, temp);
        temp = temp->next;
    }
    return 0;
}