#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newNode, *previous;
int choice, length = 0;

int main()
{
    printf("Enter if you want to add a node(1 = add, 0 = stop) ");
    scanf("%d", &choice);

    while (choice != 0)
    {

        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the %d element: ", length);
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
        length++;
        printf("Enter if you want to add a node(1 = add, 0 = stop) ");
        scanf("%d", &choice);
    }

    temp = head;
    for (int j = 0; j < length; j++)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}