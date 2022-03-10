#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
    struct node* temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
    }
}

void print(){
    struct node *temp = head;
    printf("the linked list is as following \n");
    while (temp)
    {
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
void delete(int n){
    struct node* temp = head;
    if(n==1){
        head = temp->next;
        free(temp);
        return;
    }
    int i;
    for(i = 1; i<n-1; i++){
        temp = temp->next;
    }
    struct node* temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}
void main(){
    head = NULL;
    int n;
    insert(2);
    insert(4);
    insert(5);
    insert(6);
    insert(8);
    print();
    printf("\nEnter a position: ");
    scanf("%d", &n);
    delete(n);
    print();
}