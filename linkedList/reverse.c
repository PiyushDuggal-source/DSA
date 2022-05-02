#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newNode;
int nodeSize;
void reverse()
{
    struct node *pre, *cur, *nex;
    pre = 0;
    cur = nex = head;
    while (nex != 0)
    {
        nex = nex->next;
        cur->next = pre;
        pre = cur;
        cur = nex;
    }
    temp = pre;
    printf("dawd%d\n", pre->data);

    for (int j = 0; j < nodeSize; j++)
    {
        printf("reversed = %d\n", temp->data);
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

    reverse();

    return 0;
}