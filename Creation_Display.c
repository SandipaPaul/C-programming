#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    int choice = 1; // Initialize choice to enter the loop

    head = temp = 0;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("DO YOU WANT TO CONTINUE(0,1)?");
        scanf("%d", &choice);
    }

    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}