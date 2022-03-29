// Binary Search Tree 
#include<stdio.h>
#include<stdlib.h>

struct bst{
    int data;
    struct bst* left;
    struct bst* right;
};

struct bst* get_new_node(int data){
    struct bst* temp = (struct bst*)malloc(sizeof(struct bst));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct bst* insert(struct bst *root, int data)
{   
    if(root == NULL){
        printf("insertion done\n");
        root = get_new_node(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

int search(struct bst* root, int data){
    if(root == NULL) return 0;
    else if(root->data == data) return 1;
    else if(data <= root->data) return search(root->left, data);
    else return search(root->right, data);
}

void main(){
    struct bst *rootptr = NULL;
    int num;
    rootptr = insert(rootptr, 15);
    rootptr = insert(rootptr, 10);
    rootptr = insert(rootptr, 20);
    rootptr = insert(rootptr, 25);
    rootptr = insert(rootptr, 8);
    rootptr = insert(rootptr, 12);
    printf("enter the number you want to search: ");
    scanf("%d",&num);
    if(search(rootptr, num) == 1) printf("Number Found");
    else printf("Number not Found");
}