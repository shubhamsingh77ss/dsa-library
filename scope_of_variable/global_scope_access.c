//program showing global variable accessed across multiple functions
#include<stdio.h>

int n = 1000; // global variable

// Function prototypes
void sample();
void check();

int main()
{
    printf("Value of n=%d\n", n); // global variable accessible here
    sample();  // call sample()
    return 0;
}

void sample()
{
    printf("Value of n=%d\n", n); // global variable accessible here too
    check();  // call check()
}

void check()
{
    printf("Value of n=%d\n", n); // global variable accessible here as well
}
