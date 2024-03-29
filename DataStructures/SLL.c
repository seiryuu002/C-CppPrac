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

void print(struct Node *head){                                  // #method1: void print(){
    printf("The list is: ");                                    // #method1: struct node* temp = head;
    while(head != NULL){                                        // #method1: while(temp != NULL){
        printf("%d -> ", head->data);                           // #method1: printf(" %d ->", temp->data);
        head = head->next;                                      // #method1: temp = temp->next;
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

//int *p = (int*)malloc(sizeof(int));     // new             
             