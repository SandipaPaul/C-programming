#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void insertAtMid(struct node** head,int data){
   struct node* newnode=(struct node*)malloc(sizeof(struct node));
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   int count=0;
   struct node* s=*head;
   while(temp->next!=NULL){
    temp=s;
    s=s->next;
    count++;
    if(count==2){
        break;
    }
   }
   newnode->next=s;
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
    insertAtMid(&head, 19);
    while(head!=NULL){
        printf("%d ->",head->data);
        head=head->next;
    }
}