//program to demonstrate dereferencing pointers to access variable values in C
#include<stdio.h>

int main()
{
    // Declare integer variable and pointer to int
    int a = 100, *ip;

    // Declare float variable and pointer to float
    float b = 90000.0, *fp;

    // Assign addresses of variables to pointers
    ip = &a;
    fp = &b;

    // Dereference pointers to access values stored in variables
    printf("Value of a = %d\n", *ip);     // prints 100
    printf("Value of b = %.2f\n", *fp);   // prints 90000.00

    return 0;
}
