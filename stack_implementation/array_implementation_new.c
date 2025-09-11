//write a program for implemantation of stack the array representation
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct stack_node {
    int arr[MAX];
    int top;
} node;

// Function prototypes
void push(int item, node *ptr);
void pop(node *ptr);
void display(node *ptr);

void push(int item, node *ptr) {
    if (ptr->top == MAX - 1) {
        printf("\n\n\t** Overflow condition **");
        printf("\n\tElement can't be inserted into the stack\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = item;
        printf("\n\tElement [%d] pushed into stack\n", item);
    }
}

void pop(node *ptr) {
    if (ptr->top < 0) {
        printf("\n\n\t** Underflow condition **\n");
    } else {
        int item = ptr->arr[ptr->top];
        ptr->top--;
        printf("\n\tElement [%d] is popped from stack\n", item);
    }
}

void display(node *ptr) {
    if (ptr->top < 0) {
        printf("\n\tStack is empty\n");
    } else {
        printf("\n\tStack elements are:\n");
        for (int i = ptr->top; i >= 0; i--) {
            printf("\t%d\n", ptr->arr[i]);
        }
    }
}

int main() {
    int item;
    char ch;
    node stack; // Declare stack
    stack.top = -1;

    while (1) {
        printf("\n\n\t--- Main Menu ---\n");
        printf("\t1) Push Operation on Stack\n");
        printf("\t2) Pop Operation on Stack\n");
        printf("\t3) Display Stack\n");
        printf("\t4) Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch); // space before %c avoids newline issue

        switch (ch) {
            case '1':
                printf("\n\tEnter the number you want to push: ");
                scanf("%d", &item);
                push(item, &stack);
                break;
            case '2':
                pop(&stack);
                break;
            case '3':
                display(&stack);
                break;
            case '4':
                exit(0);
            default:
                printf("\n\tInvalid choice! Try again.\n");
        }
    }
    return 0;
}
