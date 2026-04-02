#include <iostream>
#include <algorithm>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int val;
    Node(int data)
    {
        left = NULL;
        right = NULL;
        val = data;
    }
};
Node *insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}
int maxi_depth(Node *root)
{
    if (root == NULL)
        return 0;
    int LH = maxi_depth(root->left);
    int RH = maxi_depth(root->right);
    return 1 + max(LH, RH);
}
int diameter = 0;
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int RH = max_height(root->right);
    int LH = max_height(root->left);
    diameter = max(diameter, RH + LH);
    return 1 + max(LH, RH);
}
int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 4);
    max_height(root);
    cout << diameter << endl;
    return 0;
}