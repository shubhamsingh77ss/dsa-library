//program to demonstrate pointer to pointer (double pointer) usage in C
#include<stdio.h>

int main()
{
    // Declare an integer variable
    int val = 100;

    // Declare a pointer to int
    int *pnt;

    // Declare a pointer to pointer to int
    int **ppnt;

    // Assign the address of val to pnt
    pnt = &val;

    // Assign the address of pnt to ppnt
    ppnt = &pnt;

    // Print the address of val stored in pnt
    printf("Address of val = %u\n", pnt);

    // Print the value of val using single pointer dereferencing
    printf("Value of val = %d\n", *pnt);

    // Print the address of pointer variable pnt stored in ppnt
    printf("Address of pointer variable pnt = %u\n", ppnt);

    // Print the address of val by dereferencing double pointer once
    printf("Address of val = %u\n", *ppnt);

    // Print the value of val by dereferencing double pointer twice
    printf("Value of val = %d\n", **ppnt);

    return 0;
}
