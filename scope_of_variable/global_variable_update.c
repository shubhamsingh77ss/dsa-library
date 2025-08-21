//program demonstrating global variable modification across functions
#include<stdio.h>

// Global variable
int n = 1000;

// Function prototypes
void sample();
void check();

int main()
{
    printf("Value of n in main() = %d\n", n);
    sample();   // call sample()
    printf("Value of n in main() = %d\n", n); // value reflects changes from check()
    return 0;
}

void sample()
{
    printf("Value of n in sample() = %d\n", n);
    check();   // call check(), which modifies n
    printf("Value of n in sample() = %d\n", n); // updated value after check()
}

void check()
{
    printf("Value of n in check() = %d\n", n);
    n += 500; // modifying global variable
    printf("Value of n in check() after update = %d\n", n);
}
