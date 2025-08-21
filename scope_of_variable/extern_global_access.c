//example demonstrating use of extern to access global variable
#include<stdio.h>

// Global variable
int n = 10;

int main()
{
    // Local variable shadows the global one
    int n = 90;

    // Prints the local variable
    printf("%d\n", n);

    {
        // Forcefully access the global variable using extern
        extern int n;
        printf("%d\n", n);
    }

    return 0;
}
