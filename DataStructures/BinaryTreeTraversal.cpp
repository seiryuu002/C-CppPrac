#include <iostream>
#include<queue>
using namespace std;
struct bst
{
    char data;
    struct bst *left;
    struct bst *right;
};

struct bst *get_new_node(int data)
{
    struct bst *temp = (struct bst *)malloc(sizeof(struct bst));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct bst *insert(struct bst *root, int data)
{
    if (root == NULL)
    {
        printf("insertion done\n");
        root = get_new_node(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}


void level_order(struct bst* root){
    if(root == NULL){
        return;
    }
    queue<bst*> Q;
    Q.push(root);
    while(!Q.empty()){
        bst* current = Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) 
            Q.push(current->left);
        if (current->left != NULL)
            Q.push(current->left);
        Q.pop();
    }
}

int main()
{
    struct bst *rootptr = NULL;
    int num;
    rootptr = insert(rootptr, 15);
    rootptr = insert(rootptr, 10);
    rootptr = insert(rootptr, 8);
    rootptr = insert(rootptr, 12);
    rootptr = insert(rootptr, 20);
    rootptr = insert(rootptr, 17);
    rootptr = insert(rootptr, 25);
    level_order(rootptr);
    return 0;
}