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

    temp = head;
    for (int j = 1; j <= nodeSize; j++)
    {
        printf("%dth ele - %d\n", j, temp->data);
        temp = temp->next;
    }

    printf("Enter the element you want to insert in 1st place: ");
    newNode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = temp = newNode;

    for (int j = 1; j <= nodeSize + 1; j++)
    {
        printf("%dth ele - %d\n", j, temp->data);
        temp = temp->next;
    }
    return 0;
}