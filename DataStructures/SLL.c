#include<stdio.h>
struct Node *head;
struct Node{
    int data;
    struct Node* next;
};













int main(){
    head = NULL;
    printf("Enter the number of Nodes: ");
    int i, n, data;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the number for Node %d: ", i);
        scanf("%d", data);
        insert(data);
    }
}