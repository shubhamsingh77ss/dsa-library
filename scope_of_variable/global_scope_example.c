//program demonstrating use of global variable across functions
#include<stdio.h>

// Global variable declaration
int a = 900;

int first();   // prototype
void second(); // prototype

void main()
{
    printf("Here we are checking the scope of variables\n");
    first();   // prints value of global variable
    second();  // also prints value of global variable
}

// Function that prints the global variable
int first()
{
    printf("%d\n", a);
    return 0;
}

// Another function that also prints the global variable
void second()
{
    printf("%d\n", a);
}
