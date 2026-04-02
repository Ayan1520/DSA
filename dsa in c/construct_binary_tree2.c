// preorder & inorder

#include <stdio.h>
#include <stdlib.h>
int size = 0;
int search(int *ino, int left, int right, int key)
{
    for (int i = left; i <= right; i++)
    {
        if (ino[i] == key)
        {
            return i;
            break;
        }
    }
    return -1;
}

struct bst
{
    int val;
    struct bst *right;
    struct bst *left;
};

struct bst *createnode(int val)
{
    struct bst *root = malloc(sizeof(struct bst));
    root->left = NULL;
    root->right = NULL;
    root->val = val;
    return root;
}
// buildtree
struct bst *buildtree(int *pro, int *ino, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }
    struct bst *root;
    int idx = search(ino, left, right, pro[size++]);
    root = createnode(pro[size - 1]);
    root->left = buildtree(pro, ino, left, idx - 1);
    root->right = buildtree(pro, ino, idx + 1, right);
    return root;
}

void inorder(struct bst *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->val);
    inorder(root->right);
}
int main()
{
    int pro[11] = {1, 2, 4, 8, 9, 10, 11, 5, 3, 6, 7};
    int ino[11] = {8, 4, 10, 9, 11, 2, 5, 1, 6, 3, 7};
    struct bst *root = buildtree(pro, ino, 0, 10);
    inorder(root);
    return 0;
}
