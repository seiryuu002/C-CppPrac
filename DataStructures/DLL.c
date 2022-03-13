// operations on DLL insertion, deletion, traversal and reversal.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head;
struct node* createNewNode(int x){
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void insert_beg(int x){
    struct node *newnode = createNewNode(x);
    if(head == NULL){
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insert_end(int x){
    struct node *newnode = createNewNode(x);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void print_list(){
    struct node* temp = head;
    printf("NULL <-");
    while(temp != NULL){
        printf(" %d ", temp->data);
        temp = temp->next;
        if (temp == NULL)
            printf("-> NULL");
        else
            printf("<->");
    }
    printf("\n");
}

void reverse_list(){
    struct node* temp = head;
    if( temp == NULL) return;
    while(temp->next != NULL){
        temp = temp->next;
    }
    printf("NULL <-");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->prev;
        if (temp == NULL)
            printf("-> NULL");
        else
            printf("<->");
    }
    printf("\n");
}

void main(){
    head = NULL;
    insert_beg(4);
    insert_end(6);
    insert_beg(2);
    insert_end(8);
    print_list();
    reverse_list();
}