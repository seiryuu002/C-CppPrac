#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert_beg(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = data;
    temp->next = head;
    head = temp;

}

void print(){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp = head;
    printf("the linked list is as following \n");
    while(temp){
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void main(){
    int i,n,data;
    head = NULL;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);
    for(i = 0; i<n ; i++){
        printf("Enter the data for node %d: ", i+1);
        scanf("%d",&data);
        insert_beg(data);
    }
    print();
}