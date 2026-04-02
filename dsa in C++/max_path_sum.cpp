#include <iostream>
#include <algorithm>
#include <climits>
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
int maxi = INT_MIN;
int pathmax(Node *root)
{
    if (root == NULL)
        return 0;
    int LH = pathmax(root->left);
    int RH = pathmax(root->right);
    maxi = max(maxi, LH + RH + root->val);
    return root->val + max(LH, RH);
}
int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 4);
    pathmax(root);
    cout << maxi << endl;
    return 0;
}