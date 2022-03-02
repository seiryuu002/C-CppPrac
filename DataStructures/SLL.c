#include<stdio.h>
#include<stdlib.h>
// #method1: struct Node* head; head = NULL;                 
struct Node{
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data){                      // #method1: void insert( int data){  //#method2: struct Node* insert(struct Node* head, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp->next = (*head);                                       //#method1: temp -> next = head;
    (*head) = temp;                                             //#method1: head = temp;
                                                                //#method1: <remove this line>        //#method2: return head;
}

void print(struct Node *head){
    printf("The list is: ");
    while(head != NULL){
        printf("%d -> ", head->data);
        head = head -> next;
    }
}

int main(){
    struct Node *head = NULL;                                   //#method1: <remove this line>
    printf("\nEnter the number of Nodes: ");
    int i, n, data;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter the value for Node %d: ", i+1);
        scanf("%d", &data);
        insert(&head, data);                                     //#method1: insert(data);           //#method2: head = insert(head, data);
        print(head);                                             //#method1: print();                //#method2: print(head);
    }
}