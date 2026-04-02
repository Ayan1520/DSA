#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
}; //.......class.....

void init(struct Node *s, int value)
{
    s->val = value;
    s->next = NULL;
} //....intialization....
int main()
{
    int arr[] = {10, 20, 30, 35, 45};
    int n = 5;
    struct Node *nodes[n]; // array of pointers
    for (int i = 0; i < n; i++)
    {
        nodes[i] = malloc(sizeof(struct Node));
        init(nodes[i], arr[i]);
    } // ....create size and intialize the value....
    for (int j = 0; j < n - 1; j++)
    {
        nodes[j]->next = nodes[j + 1];
    } //....join the node.....
    struct Node *temp = nodes[0];
    while (temp != NULL)
    {
        printf("%d -> ", temp->val);
        temp = temp->next;
    } //...print the node.....
    return 0;
}