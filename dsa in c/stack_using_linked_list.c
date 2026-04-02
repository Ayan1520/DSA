#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
void init(struct Node *s, int value)
{
    s->next = NULL;
    s->value = value;
}

void push(struct Node *s, int val, struct Node **head)
{
    struct Node *node1;
    node1 = malloc(sizeof(struct Node));
    init(node1, val);
    node1->next = *head;
    *head = node1;
}