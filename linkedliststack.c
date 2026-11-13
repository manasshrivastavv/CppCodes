#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};
struct Node *top=NULL;
void push(){
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    printf("enter the element to push  :\n");
    scanf("%d",&newNode->data);
    newNode->next=top;
    top=newNode;
}
void pop(){
    struct Node *temp;
    if(top==NULL){
        printf("stack is empty");
        return;
    }
    printf("the deleted element is %d",top->data);
    temp=top;
    top=top->next;
    free(temp);
}
void display(){
    struct Node *temp;
    if(top==NULL){
        printf("stack is empty");
        return;
    }
    printf("the elements in the stack are : ");
    temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int choice;
    while(1){
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("invalid choice");
        }
    }
}