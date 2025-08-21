//program demonstrating local variable shadowing in different functions
#include<stdio.h>

// Function prototype
void sample();

int main()
{
    int n = 200;  // local variable in main()
    sample();     // calls sample() which has its own local n
    printf("Value of n=%d\n", n); // prints main()'s n
    return 0;
}

// Independent function with its own local variable 'n'
void sample()
{
    int n = 100;  // local variable in sample()
    printf("Value of n=%d\n", n);
}
