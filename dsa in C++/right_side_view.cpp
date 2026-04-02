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
void rightside(Node *root)
{
    deque<pair<Node *, int>> dq;
    map<int, int> m;
    dq.push_back({root, 0});
    while (dq.size() > 0)
    {
        int size = dq.size();
        for (int i = 0; i < size; i++)
        {
            Node *e = dq.front().first;
            int level = dq.front().second;
            if (i == size - 1)
                m[dq.front().second] = e->val;
            dq.pop_front();
            if (e->left != NULL)
                dq.push_back({e->left, level - 1});
            if (e->right != NULL)
                dq.push_back({e->right, level + 1});
        }
    }
    for (auto it : m)
    {
        cout << it.second << endl;
    }
}
int main()
{
    Node *root = NULL;
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 9);
    root = insert(root, 20);
    root = insert(root, 4);
    rightside(root);
    return 0;
}