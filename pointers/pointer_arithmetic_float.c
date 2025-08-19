//program to demonstrate pointer arithmetic with float pointer in C
#include<stdio.h>

int main()
{
    // Declare a float variable
    float a = 100.00;

    // Declare a pointer to float
    float *pt;

    // Assign the address of variable a to pointer pt
    pt = &a;

    // Print the address and value using the pointer
    printf("Address = %u\tValue = %5.2f\n", pt, *pt);

    // Increment the pointer (moves ahead by sizeof(float) bytes)
    ++pt;

    // Print the new address and the value at that location
    // (Note: Value here is undefined because pt now points to invalid memory)
    printf("Address = %u\tValue = %5.2f\n", pt, *pt);

    return 0;
}
