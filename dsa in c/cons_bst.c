#include <stdio.h>
#include <stdlib.h>
struct cons_bst
{
    int data;
    struct cons_bst *left;
    struct cons_bst *right;
};
struct cons_bst *createnode(int val)
{
    struct cons_bst *s = malloc(sizeof(struct cons_bst));
    s->left = NULL;
    s->right = NULL;
    s->data = val;
    return s;
}

struct cons_bst *bst(struct cons_bst *root, int val)
{
    if (root == NULL)
    {
        root = createnode(val);
    }
    else
    {
        if (val < root->data)
        {
            root->left = bst(root->left, val);
        }
        else
        {
            root->right = bst(root->right, val);
        }
    }
    return root;
}
struct cons_bst *getinordersucessor(struct cons_bst *root)
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
struct cons_bst *deletenode(struct cons_bst *s, int key)
{
    // srearch
    if (s == NULL)
    {
        return s;
    }
    if (key < s->data)
    {
        s->left = deletenode(s->left, key);
    }
    else if (key > s->data)
    {
        s->right = deletenode(s->right, key);
    }
    else
    {
        // case1+case2
        if (s->left == NULL)
        {
            struct cons_bst *temp = s->right;
            free(s);
            return temp;
        }
        else if (s->right == NULL)
        {
            struct cons_bst *temp = s->left;
            free(s);
            return temp;
        }
        else
        {
            // case 3
            struct cons_bst *si = getinordersucessor(s->right);
            s->data = si->data;
            s->right = deletenode(s->right, si->data);
        }
    }
    return s;
}

void inorder(struct cons_bst *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct cons_bst *root = NULL;
    root = bst(root, 5);
    root = bst(root, 3);
    root = bst(root, 7);
    root = bst(root, 1);
    root = bst(root, 2);
    root = bst(root, 3);

    inorder(root);
    printf("\n");
    root = deletenode(root, 7);
    root = deletenode(root, 5);
    inorder(root);
}
