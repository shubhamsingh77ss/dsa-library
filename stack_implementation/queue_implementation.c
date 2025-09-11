//write a program to implement queue using array representation
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct queue_type {
    int arr[MAX];
    int front;
    int rear;
} node;

// Insert into circular queue
void insert(node *q, int item) {
    if ((q->front == 0 && q->rear == MAX - 1) || (q->front == q->rear + 1)) {
        printf("\nQueue Overflow Error...\n");
        return;
    }

    if (q->front == -1) { // empty queue
        q->front = q->rear = 0;
    } else if (q->rear == MAX - 1) {
        q->rear = 0; // wrap around
    } else {
        q->rear++;
    }

    q->arr[q->rear] = item;
    printf("\nInserted: %d\n", item);
}

// Delete from circular queue
int delete(node *q) {
    int val;
    if (q->front == -1) {
        printf("\nQueue Underflow Error...\n");
        return -1; // indicate failure
    }

    val = q->arr[q->front];

    if (q->front == q->rear) {
        // Queue has only one element
        q->front = q->rear = -1;
    } else if (q->front == MAX - 1) {
        q->front = 0;
    } else {
        q->front++;
    }

    return val;
}

// Display queue
void display(node *q) {
    if (q->front == -1) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nQueue elements are: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->arr[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    char ch;
    int val, item;
    node queue;
    queue.front = queue.rear = -1;

    while (1) {
        printf("\n\n--- Main Menu ---\n");
        printf("1) Insert element into Queue\n");
        printf("2) Delete element from Queue\n");
        printf("3) Display Queue\n");
        printf("4) Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);  // space before %c eats whitespace

        switch (ch) {
            case '1':
                printf("Enter the number to insert: ");
                scanf("%d", &item);
                insert(&queue, item);
                break;

            case '2':
                val = delete(&queue);
                if (val != -1)
                    printf("Deleted element: %d\n", val);
                break;

            case '3':
                display(&queue);
                break;

            case '4':
                exit(0);

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
