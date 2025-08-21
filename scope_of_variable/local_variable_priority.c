//example showing local variable priority over global variable
#include<stdio.h>

// Global variable
int n = 10;

int main()
{
    // Local variable with the same name
    int n = 90;

    // Local variable takes priority over global
    printf("%d\n", n);

    return 0;
}
