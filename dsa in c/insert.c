#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
void init(struct Node *s, int value)
{
    s->value = value;
    s->next = NULL;
}
struct Node *insert(struct Node *head, int n, int val)
{
    int j = 0;
    struct Node *node1 = malloc(sizeof(struct Node));
    init(node1, val);
    struct Node *x = head;
    struct Node *curr = head;
    while (j != n - 1)
    {
        curr = curr->next;
        j++;
    }
    struct Node *temp = curr->next;
    curr->next = node1;
    node1->next = temp;
    return x;
}
int main()
{
    int arr[] = {4, 5, 61, 36, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Node *nodes[n];
    for (int i = 0; i < n; i++)
    {
        nodes[i] = malloc(sizeof(struct Node));
        init(nodes[i], arr[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        nodes[j]->next = nodes[j + 1];
    }
    struct Node *head = nodes[0];
    struct Node *temp = nodes[0];
    while (temp != NULL)
    {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("\n");
    head = insert(head, 3, 5);
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    return 0;
}