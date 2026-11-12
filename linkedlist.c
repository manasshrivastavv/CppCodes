#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void create (){
    int n,i,value;
    struct Node *newNode,*temp;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value :");
        scanf("%d",&value);
        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=value;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
}
int main(){
    create();
}
