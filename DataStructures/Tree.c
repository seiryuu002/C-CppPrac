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

int find_min(struct bst* root){
    if(root == NULL){
        printf("Error: Tree is Empty");
        return -1;
    }
    while(root->left !=NULL){
        root = root->left;
    }
    return root->data;
}

int find_max(struct bst *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is Empty");
        return -1;
    }
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

int find_height(struct bst* root){
    if(root == NULL){
        return -1;
    }
    return max(find_height(root->left), find_height(root->right)) +1;
}

int find_min_rec(struct bst *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is Empty");
        return -1;
    }
    if(root->left == NULL){
        return root->data;
    }
    return find_min_rec(root->left);
}

int find_max_rec(struct bst *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is Empty");
        return -1;
    }
    if (root->right == NULL)
    {
        return root->data;
    }
    return find_min_rec(root->right);
}

void main(){
    struct bst *rootptr = NULL;
    int num;
    rootptr = insert(rootptr, 15);
    rootptr = insert(rootptr, 10);
    rootptr = insert(rootptr, 8);
    rootptr = insert(rootptr, 12);
    rootptr = insert(rootptr, 20);
    rootptr = insert(rootptr, 17);
    rootptr = insert(rootptr, 25);
    printf("enter the number you want to search: ");
    scanf("%d",&num);
    if(search(rootptr, num) == 1) printf("Number Found");
    else printf("Number not Found");
}