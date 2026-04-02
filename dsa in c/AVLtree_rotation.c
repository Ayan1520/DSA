#include <stdio.h>
#include <stdlib.h>
struct bst
{
    int val;
    struct bst *left;
    struct bst *right;
    int height;
};

int max(int a, int b)
{
    return a > b ? a : b;
}

struct bst *createnode(int val)
{
    struct bst *root = (struct bst *)malloc(sizeof(struct bst));
    root->val = val;
    root->left = NULL;
    root->right = NULL;
    root->height = 1;
    return root;
}

int getheight(struct bst *n)
{
    if (n == NULL)
        return -1;
    return n->height;
}

int balancefactor(struct bst *n)
{
    if (n == NULL)
        return 0;
    return getheight(n->left) - getheight(n->right);
}

// right rotation
struct bst *right_rotation(struct bst *y)
{
    struct bst *x = y->left;
    struct bst *t2 = x->right;
    x->right = y;
    y->left = t2;
    x->height = max(getheight(x->left), getheight(x->right)) + 1;
    y->height = max(getheight(y->left), getheight(y->right)) + 1;
    return x;
}

// left rotation
struct bst *left_rotation(struct bst *x)
{
    struct bst *y = x->right;
    struct bst *t2 = y->left;
    y->left = x;
    x->right = t2;
    x->height = max(getheight(x->left), getheight(x->right)) + 1;
    y->height = max(getheight(y->left), getheight(y->right)) + 1;
    return y;
}
// insert
struct bst *insert(struct bst *root, int val)
{
    if (root == NULL)
        return createnode(val);
    else
    {
        if (val < root->val)
        {
            root->left = insert(root->left, val);
        }
        else
        {
            root->right = insert(root->right, val);
        }
    }
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    int bf = balancefactor(root);
    // Left left
    if (bf > 1 && val < root->left->val)
    {
        return right_rotation(root);
    }
    // right right
    else if (bf < -1 && val > root->right->val)
    {
        return left_rotation(root);
    }

    // left_right
    else if (bf > 1 && val > root->left->val)
    {
        root->left = left_rotation(root->left);
        return right_rotation(root);
    }
    // right left
    else if (bf < -1 && val < root->right->val)
    {
        root->right = right_rotation(root->right);
        return left_rotation(root);
    }
    return root;
}

void preoder(struct bst *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->val);
    preoder(root->left);
    preoder(root->right);
}

int main()
{
    int arr[12] = {14, 17, 11, 7, 53, 4, 13, 12, 8, 60, 19, 20};
    struct bst *root = malloc(sizeof(struct bst));
    root = NULL;
    for (int i = 0; i < 12; i++)
    {
        root = insert(root, arr[i]);
    }
    preoder(root);
    return 0;
}