#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* bot;
};

struct node *top = NULL;

void push(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = data;
    temp->bot = top;
    top = temp;
}

void pop(){
    struct node* temp;
    if(top == NULL)
    return;
    temp = top;
    top = top->bot;
    free(temp);
}

void Top(){
    struct node* temp = top;
    printf("Top: %d ", temp->data);
}

int isempty(){
    if(top == NULL)
    return 0;
    return 1;
}

void print(){
    struct node* temp = top;
    printf("Stack: top -> ");
    while(temp != NULL){
        printf(" %d ", temp->data);
        temp = temp->bot;
    }printf("\n");

}

void main(){
    push(2); print();
    push(4); print();
    push(6); print();
    pop();   print();
    push(8); print();
    push(10);print();
}