#include <stdio.h>
#include <stdlib.h>
#define Max 100
struct queue
{
    int arr[Max];
    int front;
    int rear;
};
void init(struct queue *s)
{
    s->front = -1;
    s->rear = -1;
}
int isEmpty(struct queue *s)
{
    return s->front == -1;
}

int isFull(struct queue *s)
{
    return s->rear == Max - 1;
}

void enqueue(struct queue *s, int value)
{
    if (isFull(s))
    {
        printf("queue is overflow");
        return;
    }
    if (isEmpty(s))
    {
        s->front = 0;
    }
    s->rear = s->rear + 1;
    s->arr[s->rear] = value;
}

int dequeu(struct queue *s)
{
    if (isEmpty(s))
    {
        printf("queue is empty");
        return -1;
    }
    int val = s->arr[s->front];
    if (s->front == s->rear)
    {
        s->front = s->rear = -1;
    }
    else
    {
        s->front++;
    }
    return val;
}

int peek(struct queue *s)
{
    if (isEmpty(s))
    {
        printf("queue is Empty");
    }
    return s->arr[s->front];
}

int main()
{
    struct queue q;
    init(&q);
    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 13);
    printf("%d", peek(&q));
    return 0;
}