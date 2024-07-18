#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    int data[MAX];
    int front, rear;
} Queue;

// We use '->' here because 'q' is a pointer to a Queue struct.
// The '->' operator is used to access members of a struct through a pointer.
// It's equivalent to (*q).front and (*q).rear, but more concise and readable.
void initialize(Queue *q)
{
    q->front = q->rear = -1;
}

int isFull(Queue *q)
{
    return q->rear == MAX - 1;
}

int isEmpty(Queue *q)
{
    return q->front == -1 || q->front > q->rear;
}
// Helper function to print an integer
void printInt(void *data)
{
    printf("%d ", *(int *)data);
}
void enqueue(Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (q->front == -1)
            q->front = 0;
        q->data[++(q->rear)] = value;
    }
}

int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
        return -1;
    }
    else
    {
        return q->data[(q->front)++];
    }
}

void printQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->data[i]);
    }
    printf("\n");
}

int main()
{
    Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    printQueue(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    return 0;
}
