#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
};
struct node *head, *temp, *newNode;
int choice, length;
void create(){
    printf("Enter 0 to add or any number to create: ");
    scanf("%d", choice);
    while(choice != 0){
        length++;
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element: ");
        scanf("%d" , &newNode->data);
        newNode->next = 0;
        if(head == NULL){
            head = newNode;
            temp = head;

        }
        temp->next = newNode;
        temp= newNode;
        printf("Enter 0 to add or any number to create: ");
    scanf("%d", choice);

    }

    temp = head;
    for(int i = 0; i<length; i++){
        printf("%d", temp->data);
        temp->next;
    }


    
}


int main(){
    create();
}