#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

struct stack
{
    int arr[MAX];
    int top;
};

void init(struct stack *s)
{
    s->top = -1;
}

int isEmpty(struct stack *s)
{
    return s->top == -1;
}

int isFull(struct stack *s)
{
    return s->top == MAX - 1;
}

void push(struct stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
        return;
    }

    s->top++;
    s->arr[s->top] = value;
}

int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        return -1;
    }

    int e = s->arr[s->top];
    s->top--;
    return e;
}

int main()
{
    struct stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Popped = %d\n", pop(&s));
    printf("Popped = %d\n", pop(&s));

    return 0;
}
