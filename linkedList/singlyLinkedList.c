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
            head = temp = newNode;
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

int addAtTheEnd(int length)
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d", &newNode->data);
    newNode->next = 0;
    temp = head;
    printf("lead next - %d\n", head->next);

    for (int i = 0; i < length - 1; i++)
    {
        temp = temp->next;
    }
    printf("temp = %d\n", temp);
    temp->next = newNode;
}

void addAtBeginning()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element for the beginning: ");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;
}

void addAtAnyPos()
{
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d", &newNode->data);
    temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromEnd(int length)
{
    printf("\nElement is deleted from end\n");
    struct node *last;
    temp = head;
    for (int i = 0; i < length - 2; i++)
    {
        temp = temp->next;
    }
    last = temp->next;
    temp->next = 0;
    free(last);
}

void deleteFromFirst()

{
    printf("\nElement is deleted from first\n");

    temp = head;
    head = temp->next;
    free(temp);
}

void deleteFromAnyPos()
{
    int pos, i = 1;
    struct node *del;
    printf("Enter the position: ");
    scanf("%d", &pos);
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    del = temp->next;
    temp->next = del->next;
    free(del);
}

void reverse()
{
    printf("Reversing the list\n");
    struct node *pre, *nxt;
    pre = 0;
    temp = nxt = head;
    while (nxt != 0)
    {
        nxt = nxt->next;
        temp->next = pre;
        pre = temp;
        temp = nxt;
    }
    head = pre;
}

void display(int length)
{
    temp = head;
    for (int i = 0; i < length; i++)
    {
        printf("ele - %d ad. - %d\n", temp->data, temp);
        temp = temp->next;
    }
}

int main()
{
    int length = create();
    create();
    display(length);
    // addAtTheEnd();
    // display(length + 1);
    // addAtBeginning();
    // display(length + 1);
    // addAtAnyPos();
    // display(length + 1);
    // deleteFromEnd(length);
    // display(length);
    // deleteFromFirst();
    // display(length);
    // deleteFromAnyPos();
    // display(length);
    // reverse();
    // display(length);

    return 0;
}