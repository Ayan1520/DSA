#include <iostream>
using namespace std;
struct Node
{
    struct Node *left;
    struct Node *right;
    struct Node *parent;
    int data;
    bool red;

    Node(int val)
    {
        data = val;
        bool red = true;
        left = right = parent = NULL;
    }
};
class redblack
{
private:
    Node *root;
    void leftrotate(Node *x)
    {
        Node *y = x->right;
        Node *t2 = y->left;
        y->left = x;
        x->right = t2;
        y->parent = x->parent;
        x->parent = y;
        if (t2)
            t2->parent = x;
        // root
        if (y->parent == NULL)
            root = y;
        else if (y->parent->left == x)
            y->parent->left = y;
        else
            y->parent->right = y;
    }
    void rightrotate(Node *y)
    {
        Node *x = y->left;
        Node *t2 = x->right;
        x->right = y;
        y->left = t2;
        x->parent = y->parent;
        y->parent = x;
        if (t2)
            t2->parent = y;
        // root
        if (x->parent == NULL)
            root = x;
        else if (x->parent->left == y)
            x->parent->left = x;
        else
            x->parent->right = x;
    }
}