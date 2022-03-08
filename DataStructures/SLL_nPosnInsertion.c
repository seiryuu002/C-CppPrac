#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int data, int n){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = data;
    temp->next = NULL;
    if(n == 1){
        temp->next = head;
        head = temp;
        return;
    }
    struct node* temp1 = head;
    int i;
    for(i = 1; i < n-1 ; i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;

}

void print(){
    printf("linked list is printed below \n");
    struct node *temp = head;
    while(temp){
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
void main(){
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    print();
}