//example demonstrating call by value in C
#include<stdio.h>

// Function prototype
void somedata(int, float);

int main()
{
    int a = 100;
    float b = 200;

    // Calling the function with copies of a and b
    somedata(a, b); 

    // Original values remain unchanged
    printf("\nValues of a and b after returning from function\n= %d\t%.2f\n\n", a, b);

    return 0;
}

// Function definition: modifies local copies of the arguments
void somedata(int a1, float b1)
{
    a1 += 10;   // local modification
    b1 *= 2;    // local modification

    printf("Value of formal parameters a1 and b1 = %d\t%.2f\n", a1, b1);
}
