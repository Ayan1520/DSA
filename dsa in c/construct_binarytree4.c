#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int search(char *pos, char key, int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        if (pos[i] == key)
        {
            return i;
        }
    }
    return -1;
}

struct bst
{
    char val;
    struct bst *left;
    struct bst *right;
};

struct bst *createnode(char val)
{
    struct bst *root = malloc(sizeof(struct bst));
    root->left = NULL;
    root->right = NULL;
    root->val = val;
    return root;
}
int size = 0;
struct bst *prpotoin(char *pre, char *pos, int left, int right)
{
    struct bst *root;
    if (left > right)
    {
        return NULL;
    }
    root = createnode(pre[size++]);
    int idx = search(pos, pre[size - 1], left, right);
    if (left == right)
    {
        return root;
    }
    root->left = prpotoin(pre, pos, left, idx - 1);
    root->right = prpotoin(pre, pos, idx + 1, right);
    return root;
}

void preorder(struct bst *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%c ", root->val);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    char pre[7] = {'A', 'D', 'H', 'L', 'Z', 'P', 'C'};
    char pos[7] = {'H', 'L', 'D', 'P', 'C', 'Z', 'A'};
    struct bst *root = prpotoin(pre, pos, 0, 6);
    preorder(root);
    return 0;
}