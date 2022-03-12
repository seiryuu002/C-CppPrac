#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}

void reverse(struct node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    reverse(p->next);
    struct node *q = p->next; //  } p-> next -> next = p; will also work
    q->next = p;              //  }
    p->next = NULL;
}

void print()
{
    struct node *temp = head;
    printf("the linked list is as following \n");
    while (temp)
    {
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main()
{
    head = NULL;
    int n;
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    print();
    reverse(head);
    print();
}