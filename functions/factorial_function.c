//program to calculate factorial of a number using a user-defined function in C
#include<stdio.h>

// Function prototype
int calcfct(int);

int main()
{
    int num, fct;

    // Input number
    printf("Enter the number: ");
    scanf("%d", &num);

    // Call user-defined function to compute factorial
    fct = calcfct(num);

    // Print result
    printf("Factorial of %d = %d", num, fct);

    return 0;
}

// Function definition to calculate factorial iteratively
int calcfct(int num1)
{
    int f = 1;

    // Multiply numbers from num1 down to 2
    while (num1 >= 2)
    {
        f = f * num1;
        num1--;
    }

    return f; // return factorial
}
