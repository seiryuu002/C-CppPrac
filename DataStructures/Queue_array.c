#include<stdio.h>
#include<conio.h>
#define max 101
int queue[max];
int front = -1;
int rear = -1;
int n = 0;

int is_empty(){
    if(front == -1 && rear == -1)
    return 1;
    return 0;
}

int is_full()
{
    if ((rear + 1)%n == front)
        return 1;
    return 0;
}

void enqueue(int data){
    if(is_full()){
        printf("Queue is Full !!!\n");
    }
    else
    {
        if(is_empty()){
            front = 0;
            rear = 0; 
        }
        else{
            rear = (rear + 1)%n;
        }
        queue[rear] = data;
        n++;
    }
}

int dequeue()
{   int x = 0;
    if (is_empty())
    {
        printf("Queue is Empty!!!\n");
    }
    else
    {
        x = queue[front];
        if (front == rear)
        {   
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1)%n;
        }
    }
    return x;
}
int Front(){
    return queue[front];
}
void print(){
    if(is_empty()){
        return;
    }
    else{
        printf("Queue: ");
        for (int i = 0; i <= n; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

void main(){
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    print();
}