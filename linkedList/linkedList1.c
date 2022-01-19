#include <stdio.h>
#include<stdlib.h>


int main(){
    struct linkedList1
{   
    int data;
    struct linkedList1 *nextNode;

};

struct linkedList1 *head, *newNode;
head = 0;

newNode = (struct linkedList1 *) malloc(sizeof(struct linkedList1));
printf("Enter the data:\n");
scanf("%d", &newNode-> data);
printf("%d", newNode->data);
newNode-> nextNode = 0;
if(head == 0){
    head = newNode;
}





}