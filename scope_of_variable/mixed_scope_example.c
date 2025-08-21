//program demonstrating interaction of local and global scope in C
#include<stdio.h>

// Global variable
int a = 900;

// Function prototypes
int first();
void second();

int main()
{
    printf("Here we are saying the scope of variables\n");
    first();   // prints local 'a' (1000)
    second();  // prints global 'a' (900)
}

// Function with local variable 'a' shadowing global 'a'
int first()
{
    int a = 1000;  // local variable shadows global
    printf("%d\n", a);
    return 0;
}

// Function without local variable 'a' → uses global 'a'
void second()
{
    printf("%d\n", a);
}
