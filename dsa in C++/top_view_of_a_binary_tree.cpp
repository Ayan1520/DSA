#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <deque>
#include <map>
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
void topview(Node *root)
{
    deque<pair<Node *, int>> dq;
    map<int, int> m;
    dq.push_back({root, 0});
    while (dq.size() > 0)
    {
        Node *e = dq.front().first;
        int height = dq.front().second;
        if (m.find(height) == m.end())
            m[height] = e->val;
        dq.pop_front();
        if (e->left != NULL)
            dq.push_back({e->left, height - 1});
        if (e->right != NULL)
            dq.push_back({e->right, height + 1});
    }
    for (auto it : m)
        cout << it.second << endl;
}
int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 20);
    root = insert(root, 4);
    pathmax(root);
    cout << maxi << endl;
    topview(root);
    return 0;
}