#include<stdio.h>
#include <stdlib.h>
// #define max 101
// struct node* stack[max];

struct node{
    int data;
    struct node* next;
};
struct node* top = NULL;

void insert(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = data;
    temp->next = NULL;
    struct node* temp2 = top;
    while(temp2 -> next != NULL){
        temp2 = temp2 -> next;
    }
    temp2->next = temp;
}

void print(){
    struct node* temp = top;
    printf("LL: Head ->");
    while(temp != NULL){
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// void push(){
//     struct node* temp = top;
//     while(temp != NULL){
//         push();
//         temp = temp -> next;
//      }
// }


void main(){
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    print();
}
