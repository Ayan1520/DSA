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

struct queue
{
    struct cons_bst **arr;
    int front;
    int rear;
};
void enqueue(struct queue *s, struct cons_bst *val)
{
    if (s->front == -1)
    {
        s->front = 0;
    }
    s->arr[++s->rear] = val;
}

struct cons_bst *dequeue(struct queue *s)
{
    if (s->front > s->rear)
    {
        return NULL;
    }
    else
    {
        return s->arr[s->front++];
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

    struct queue *s = malloc(sizeof(struct queue));
    s->front = -1;
    s->rear = -1;
    s->arr = malloc(6 * sizeof(struct cons_bst *));
    enqueue(s, root);
    int size = 0;
    int *arr = malloc(6 * sizeof(int));
    while (s->front <= s->rear)
    {
        struct cons_bst *e = dequeue(s);
        arr[size++] = e->data;
        if (e->left != NULL)
        {
            enqueue(s, e->left);
        }
        if (e->right != NULL)
        {
            enqueue(s, e->right);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}