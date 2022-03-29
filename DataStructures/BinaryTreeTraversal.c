#include <stdio.h>
#include <stdlib.h>

struct bst
{
    int data;
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

void main()
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

}