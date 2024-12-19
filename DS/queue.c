#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Queue
{
    int items[MAX];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}
int isEmpty(Queue *q)
{
    return q->front == -1;
}
int isFull(Queue *q)
{
    return q->rear == MAX - 1;
}
void enqueue(Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(q))
    {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("Enqueue %d \n", value);
}
int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty ! Cannot dequeue\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear - 1;
    }
    else
    {
        q->front++;
    }
    return value;
}
void displayQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty! \n");
        return;
    }
    printf("Queue:");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
int main()
{
    Queue q;
    initializeQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    displayQueue(&q);
    printf("Dequeue:%d \n", dequeue(&q));
    printf("Dequeue:%d \n", dequeue(&q));

    displayQueue(&q);
    enqueue(&q, 40);
    displayQueue(&q);
    return 0;
}
