//program showing local variable scope within a function
#include<stdio.h>

// Function prototype
void sample();

int main()
{
    sample();  // prints value of local variable n

    // Uncommenting the following line will cause an error
    // because 'n' is not visible in main()
    // printf("Value of n=%d", n);

    return 0;
}

// Function with a local variable
void sample()
{
    int n = 100; // local to sample()
    printf("Value of n=%d", n);
}
