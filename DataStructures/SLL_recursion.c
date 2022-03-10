#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* insert(struct node* head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
    return head;
}
void print(struct node* head){
    if(head == NULL) 
        return;
    printf("%d -> ", head->data);
    print(head->next);
}

void reverse_print(struct node* head){
    if (head == NULL)
        return;
    reverse_print(head->next);
    printf("%d -> ", head->data);
}
void main()
{
    struct node *head;
    head = NULL;
    int n;
    head = insert(head, 2);
    head = insert(head, 4);
    head = insert(head, 6);
    head = insert(head, 8);
    print(head);
    reverse_print(head);
}