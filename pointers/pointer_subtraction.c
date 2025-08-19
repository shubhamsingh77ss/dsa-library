//program to demonstrate pointer subtraction in C using int and double arrays
#include<stdio.h>

int main()
{
    // Integer array
    int arr[] = {100, 200, 90, 800, 1000};

    // Pointer subtraction: difference between arr[4] and arr[2]
    // Gives number of int elements between them (not bytes)
    int n = &arr[4] - &arr[2];
    printf("n = %d\n", n);   // Output: 2

    // Double array
    double amount[] = {100.0, 200.15, 9000.99, 1000.11, 2500.55};

    // Pointer subtraction: difference between amount[4] and amount[0]
    // Gives number of double elements between them (not bytes)
    n = &amount[4] - &amount[0];
    printf("n = %d\n", n);   // Output: 4

    return 0;
}
