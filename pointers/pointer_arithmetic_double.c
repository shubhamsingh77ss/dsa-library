//program to demonstrate pointer arithmetic with double pointer in C
#include<stdio.h>

int main()
{
    // Declare a double variable
    double a = 100.00;

    // Declare a pointer to double
    double *pt;

    // Assign the address of variable a to pointer pt
    pt = &a;

    // Print the address and value using the pointer
    printf("Address = %u\tValue = %5.2f\n", pt, *pt);

    // Increment the pointer (moves ahead by sizeof(double) bytes, usually 8)
    ++pt;

    // Print the new address and the value at that location
    // NOTE: Dereferencing here is undefined behavior,
    // since pt no longer points to valid memory.
    printf("Address = %u\tValue = %5.2f\n", pt, *pt);

    return 0;
}
