#include<stdio.h>
#include <stdlib.h>
#define max 101
struct node* stack[max];
int elements = 0;
int top = -1;

struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;

void insert(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else{
        struct node *temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
    elements++;

}

void print(){
    struct node* temp = head;
    printf("LL: Head ->");
    while(temp != NULL){
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print_stack()
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
    {
        printf(" %d ", stack[i]);
    }
    printf("\n");
}

void push(){
    if (top == max - 1)
    {
        printf("Stack Overflow");
        return;
    }
    struct node* temp = head;
    while(temp != NULL){
        stack[++top] = temp;
        temp = temp->next;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Error: No element to pop\n");
        return;
    }
    top--;
}

struct node* Top(){
    return stack[top];
}

int is_empty(){
    if(top == -1)
    return 1;
    else
    return 0;
}

void reverse(){
    struct node* temp = Top();
    head = temp;
    pop();
    while(!is_empty()){
        temp->next = Top();
        pop();
        temp = temp -> next;
    }temp-> next = NULL;

}

void main(){
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    print();
    push();
    print_stack();
    printf("Top: %d\n", Top());
    reverse();
    print();
}
