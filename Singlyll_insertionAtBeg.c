#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void insertAtBeg(struct node** head,int newdata){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=newdata;
        newnode->next=*head;
        *head=newnode;
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

    insertAtBeg(&head,44);
 while(head!=NULL){
    printf("%d ->",head->data);
    head=head->next;
}
return 0;
}