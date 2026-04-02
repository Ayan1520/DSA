#include <stdio.h>
#include <stdlib.h>
// search
int search(int *pso, int *ino, int left, int right, int key)
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
    struct bst *left;
    struct bst *right;
    int size;
};
struct bst *createnode(int val)
{
    struct bst *root = malloc(sizeof(struct bst));
    root->left = NULL;
    root->right = NULL;
    root->val = val;
    return root;
}

struct bst *buildtree(int *pso, int *ino, int left, int right, struct bst *s)
{
    if (left > right)
    {
        return NULL;
    }
    int idx = search(pso, ino, left, right, pso[s->size--]);
    struct bst *root = createnode(pso[(s->size) + 1]);
    root->right = buildtree(pso, ino, idx + 1, right, s);
    root->left = buildtree(pso, ino, left, idx - 1, s);
    return root;
}
void postorder(struct bst *root)

{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->val);
    postorder(root->left);
    postorder(root->right);
}

int main()
{
    int pso[] = {9, 1, 2, 12, 7, 5, 3, 11, 4, 8};
    int ino[] = {9, 5, 1, 7, 2, 12, 8, 4, 3, 11};
    int n = sizeof(pso) / sizeof(pso[0]);
    struct bst *s = malloc(sizeof(struct bst));
    s->size = n - 1;
    struct bst *root = buildtree(pso, ino, 0, n - 1, s);
    postorder(root);
    return 0;
}