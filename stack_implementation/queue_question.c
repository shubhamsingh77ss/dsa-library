//Write a program that creates and populates a queue with values. Then print the total number of elements that are divisible by 3 but not by 5.
#include <stdio.h>
#include <stdlib.h>
#define MX 5   // maximum size of the queue

typedef struct queue_type {
    int arr[MX];  
    int front;       
    int rear;
} node;

// Insert into circular queue
int insert(node *q, int item) {
    if ((q->front == 0 && q->rear == MX - 1) || (q->front == q->rear + 1)) {
        printf("\nQueue overflow error...\n");
        return 0;  // overflow
    }

    if (q->front == -1) { 
        q->front = q->rear = 0;
    } else if (q->rear == MX - 1) {
        q->rear = 0;
    } else {
        q->rear++;
    }

    q->arr[q->rear] = item;
    return 1;  // success
}

// Dequeue all elements while counting
void dequeue_and_count(node *q) {
    int val, count = 0;

    while (1) {
        if (q->front == -1) { // empty
            break;
        }

        val = q->arr[q->front];  

        if (val % 3 == 0 && val % 5 != 0) {
            ++count;
        }

        if (q->front == q->rear) {
            q->front = q->rear = -1;  // queue becomes empty
        } else if (q->front == MX - 1) {
            q->front = 0;
        } else {
            q->front++;
        }
    }

    printf("\nTotal queue elements divisible by 3 but not by 5 = %d\n", count);
}

int main() {
    int item, flag;
    node queue;

    queue.front = -1; 
    queue.rear = -1;

    // Insert elements until overflow
    while (1) {
        printf("\nEnter the number to insert: ");
        scanf("%d", &item);

        flag = insert(&queue, item);
        if (flag == 0) {  
            break;  // queue full
        }
    }

    // Dequeue and count
    dequeue_and_count(&queue);

    return 0;
}
