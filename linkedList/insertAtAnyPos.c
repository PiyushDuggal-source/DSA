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
    for (int j = 0; j < nodeSize; j++)
    {
        printf("ele - %d with add - %d\n", temp->data, temp);
        temp = temp->next;
    }

    // Inserting at nth position
    int pos, i = 1;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > nodeSize)
    {
        printf("Invalid Position");
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        printf("%d\n", temp);
        newNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    temp = head;
    for (int j = 0; j < nodeSize + 1; j++)
    {
        printf("ele - %d with add - %d\n", temp->data, temp);
        temp = temp->next;
    }

    return 0;
}