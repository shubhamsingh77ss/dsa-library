//write a program for the stack implementaion with the help of the array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
typedef struct stack_node//It doesn’t create a new type; it just gives an existing type another name that can make your code easier to read or write.
{
    int arr[MAX];
    int top;
}node;
void push (int item,node *ptr)
{
    if(ptr->top==MAX-1)
    {
        printf("\n\n\t**overflow condition**");
        printf("\n\n\tElement cant be inserted into the stack");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=item;
    }
    getch();
}
void pop(node *ptr)
{
    int item;
    if(ptr->top<0)
    printf("\n\n\t**underflow**");
    else
    {
        item=ptr->arr[ptr->top];
        ptr->top--;
        printf("\n\n\tElement[%d] is poped from stack",item);
    }
    getch();
    return;
}
int main()
{
    int i,item;
    char ch;
    node stack;//declaration of a structure variable
    stack.top=-1;
    while(1)
    {
        system("cls");//this command is to clear the screen
        printf("\n\n\tMain Menu\n");
        printf("\n\tArray Representation of stack");
        printf("\n\t------------------------\n");
        printf("\n\n\t1)Push Operation on stack");
        printf("\n\n\t2)Pop operation on stack");
        printf("\n\n\t3)exit");
        printf("Enter your choice:");
        fflush(stdin);
        scanf("%c",&ch);
        switch(ch)
        {
            case '1':
            printf("\n\n\t Enter the no you want to add:");
            scanf("%d",&item);
            push(item,&stack);
            break;
            case '2':
            pop(&stack);
            break;
            case '3':
            exit(0);
        }
    }
}
