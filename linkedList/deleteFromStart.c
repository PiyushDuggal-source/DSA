#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newNode;
int nodeSize;
void deleteFromStart()
{
    temp = head;
    head = temp->next;
    free(temp);
    temp = head;
    for (int j = 0; j < nodeSize; j++)
    {
        printf("ele - %d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{

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
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    deleteFromStart();

    return 0;
}