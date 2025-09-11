//Write a program that creates two stacks. Populate both the stacks with values. Copy all the elements into a third stack. Display the output stack.
#include <stdio.h>
#include <stdlib.h>
#define MX 5

// stack structure
typedef struct stack_arr {
    int arr[MX * 2];
    int top;
} node;

// initialize stack
void initialise(node *ptr) {
    ptr->top = -1;
}

// push element
void push(int item, node *ptr) {
    if (ptr->top == (MX * 2) - 1) {
        printf("\nStack Overflow! Cannot push %d\n", item);
        return;
    }
    ptr->top++;
    ptr->arr[ptr->top] = item;
}

// pop element
int pop(node *ptr) {
    if (ptr->top == -1) {
        return -1; // underflow
    }
    int item = ptr->arr[ptr->top];
    ptr->top--;
    return item;
}

// display stack
void display(node *ptr) {
    if (ptr->top == -1) {
        printf("\nStack is empty!\n");
        return;
    }
    printf("\nStack elements (top to bottom):\n");
    for (int i = ptr->top; i >= 0; i--) {
        printf(" ==> %d\n", ptr->arr[i]);
    }
}

// main function
int main() {
    int item;
    node stack1, stack2, stack3;

    initialise(&stack1);
    initialise(&stack2);
    initialise(&stack3);

    printf("\n\n\t Program to copy one Stack to another ");
    printf("\n\t ====================================\n");

    // populate first stack
    printf("\nEnter %d elements for Stack 1:\n", MX);
    for (int i = 0; i < MX; i++) {
        scanf("%d", &item);
        push(item, &stack1);
    }

    // populate second stack
    printf("\nEnter %d elements for Stack 2:\n", MX);
    for (int i = 0; i < MX; i++) {
        scanf("%d", &item);
        push(item, &stack2);
    }

    // copy stack1 to stack3
    while (1) {
        item = pop(&stack1);
        if (item == -1) break;
        push(item, &stack3);
    }

    // copy stack2 to stack3
    while (1) {
        item = pop(&stack2);
        if (item == -1) break;
        push(item, &stack3);
    }

    // display final stack
    printf("\nFinal merged stack (stack3):");
    display(&stack3);

    return 0;
}
