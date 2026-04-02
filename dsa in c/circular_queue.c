#include <stdio.h>
#define max 8
int arr[max];
int capacity = 8;
int size = 0;
int front = 0;
int rear = -1;
void push(int value)
{
    if (size != max)
    {
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
    }
}
int pop()
{
    int e;
    if (size != 0)
    {
        e = arr[front];
        front = (front + 1) % capacity;
        size--;
    }
    return e;
}