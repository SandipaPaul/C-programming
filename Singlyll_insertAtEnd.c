#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void insertAtEnd(struct node** head,int value){

    //allocate memory for the new node
    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    //set the data and next pointer of the newnode
    newnode->data=value;
    newnode->next=NULL;

    //traverse to the end of the list  
    struct node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    //insert the new node at the end
    temp->next=newnode;
}
int main(){

    struct node *head;
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    struct node *node2=(struct node *)malloc(sizeof(struct node));
    struct node *node3=(struct node *)malloc(sizeof(struct node));

    node1->data=12;
    node2->data=14;
    node3->data=17;

    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    head=node1;

    insertAtEnd(&head,30);
    while(head!=NULL){
        printf("%d ->",head->data);
        head=head->next;
    }
}