struct Node
{
    int value;
    struct Node *next;
};
struct queue
{
    struct Node *front;
    struct Node *rear;
};
void push(struct Node **head, int val)
{
    struct Node *node1 = malloc(sizeof(struct Node));
    node1->value = val;
    node1->next = *head;
    *head = node1;
}

int pop(struct Node **head)
{
    struct Node *temp = *head;
    int e = temp->value;
    *head = temp->next;
    return e;
}

int main()
{

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("%d\n", pop(&stack)); // 30
    printf("%d\n", pop(&stack)); // 20
    printf("%d\n", pop(&stack)); // 10

    return 0;
}