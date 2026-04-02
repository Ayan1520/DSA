#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *root;
    struct Node *left;
    struct Node *right;
};

struct Node *createnode(int val)
{
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->root = NULL;
    newnode->val = val;
    return newnode;
}

struct Node *binarytree(int arr[], int n, int i, struct Node *parent)
{
    if (i >= n)
        return NULL;
    struct Node *node = createnode(arr[i]);
    node->root = parent;
    if (arr[i] < parent)
    {
        node->left = binarytree(arr, n, 2 * i + 1, node);
    }
    else
    {
        node->right = binarytree(arr, n, 2 * i + 2, node);
    }
    return node;
}

void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->val);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Node *root = binarytree(arr, n, 0, NULL);

    printf("Inorder Traversal: ");
    preorder(root);

    return 0;
}