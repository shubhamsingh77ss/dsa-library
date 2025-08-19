//program to demonstrate array name as pointer in C
#include<stdio.h>

int main()
{
    // Declare and initialize an integer array
    int arr[] = {100, 200, 900};

    // Print the base address of the array
    printf("Base address = %u\n", arr);

    // Print the address of the second and third elements
    printf("Address of second element arr[1] = %u\n", arr + 1);
    printf("Address of third element arr[2] = %u\n", arr + 2);

    // Access array values using pointer dereferencing
    printf("Value of the first element = %d\n", *arr);
    printf("Value of the second element = %d\n", *(arr + 1));
    printf("Value of the third element = %d\n", *(arr + 2));

    return 0;
}
