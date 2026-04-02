#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
        return;
    }
    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        return;
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "empty Linked List" << endl;
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int idx)
    {
        if (idx < 0)
            return;
        Node *newnode = new Node(val);
        Node *temp = head;
        Node *prev = NULL;
        int cnt = 0;
        if (idx == 0)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        while (temp != NULL && cnt < idx - 1)
        {
            prev = temp;
            temp = temp->next;
            cnt += 1;
        }
        prev->next = newnode;
        newnode->next = temp;
    }
    bool search(int val)
    {
        bool ans = false;
        Node *temp = head;
        while (temp != NULL && temp->data != val)
        {
            temp = temp->next;
        }
        if (temp->data == val)
        {
            ans = true;
        }
        return ans;
    }
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.pop_front();
    ll.pop_back();
    ll.printLL();
    ll.insert(15, 3);
    ll.printLL();
    bool ans = ll.search(15);
    cout << ans << endl;
    return 0;
}