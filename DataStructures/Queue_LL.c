#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front =  NULL;
struct node* rear = NULL;

void enqueue(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = data;
    temp->next = NULL;
    if(front == NULL){
        front = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        rear = rear->next;
    }
}

int dequeue(){
    struct node* temp = front;
    if(front == NULL){
        printf("Queue is Empty!!!\n");
        return 0;
    }
    else
    {
        int data = temp->data;
        if(front == rear){
            front = rear = NULL;
        }
        else{
            front = front->next;
        }
        free(temp);
        return data;
    }
}

void print(){
    if(front == NULL){
        printf("Queue is Empty!!!");
    }
    else{struct node* temp = front;
        printf("Queue: ");
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }printf("\n");
    }
}

void main(){
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    print();
    dequeue();
    print();
}