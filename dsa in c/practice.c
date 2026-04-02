#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
void init(struct node *s, int value)
{
    s->next = NULL;
    s->val = value;
}
void merge(struct node *head1, struct node *head2)
{
    struct node *curr1 = head1;
    struct node *curr2 = head2;
    while (curr1 && curr2)
    {
        struct node *temp1 = curr1->next;
        struct node *temp2 = curr2->next;
        curr1->next = curr2;
        curr2->next = temp1;
        curr1 = temp1;
        curr2 = temp2;
    }
}
