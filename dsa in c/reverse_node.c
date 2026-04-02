#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};

void init(struct Node *s, int val)
{
    s->next = NULL;
    s->value = val;
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
    struct Node *temp = nodes[0];
    while (temp != NULL)
    {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("\n");
    struct Node *curr = nodes[0];
    struct Node *prev = NULL;
    while (curr != NULL)
    {
        struct Node *temp5 = curr;
        curr = curr->next;
        temp5->next = prev;
        prev = temp5;
    }
    struct Node *head = prev;
    struct Node *temp3 = head;
    while (temp3 != NULL)
    {
        printf("%d -> ", temp3->value);
        temp3 = temp3->next;
    }
    return 0;
}