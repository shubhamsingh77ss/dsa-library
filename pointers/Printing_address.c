 //program to demonstrate printing addresses of variables using pointers in C

#include<stdio.h>

int main()
{
    // Declare an integer variable and a pointer to int
    int *pt;
    int a = 100;

    // Declare a float variable and a pointer to float
    float *fp;
    float b = 90.99;

    // Declare a char variable and a pointer to char
    char *cp;
    char bool = 'Y';

    // Assign addresses of variables to their respective pointers
    pt = &a;
    fp = &b;
    cp = &bool;

    // Print the memory addresses stored in the pointers
    // (Note: %u is used here as in original code, though %p is recommended)
    printf("Address of a = %u\n", pt);
    printf("Address of b = %u\n", fp);
    printf("Address of bool = %u\n", cp);
}
