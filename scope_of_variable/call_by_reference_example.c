//example demonstrating call by reference in C
#include<stdio.h>

// Function prototype
void somedata(int *, float *);

int main()
{
    int a = 100;
    float b = 200.0;

    // Pass addresses of variables (call by reference)
    somedata(&a, &b);

    // Original values are updated
    printf("\nValues of a and b after returning from function = %d\t%.2f\n\n", a, b);

    return 0;
}

// Function definition: modifies the actual values using pointers
void somedata(int *a1, float *b1)
{
    *a1 = *a1 + 100;  // directly update value of a
    *b1 = *b1 * 2;    // directly update value of b
}
