//program to demonstrate dynamic array creation using malloc in C
#include<stdio.h>
// #include<conio.h>   // Not needed for modern compilers
#include<stdlib.h>     // Required for malloc and free

int main()
{
    int *arr1, n, k;

    // Ask user for array size
    printf("Enter the size of array = ");
    scanf("%d", &n);

    // Allocate memory for n integers
    arr1 = (int *)malloc(sizeof(int) * n);

    // Check if memory allocation succeeded
    if (arr1 == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }

    // Input elements into dynamically allocated array
    for (k = 0; k < n; k++)
    {
        printf("arr1[%d] = ", k);
        scanf("%d", &arr1[k]);  // OR scanf("%d", (arr1 + k));
    }

    // Print stored values
    printf("\n\n------------------- Output ----------\n\n");
    for (k = 0; k < n; k++)
    {
        printf("arr1[%d] = %d\n", k, *(arr1 + k));
    }

    // Free the allocated memory
    free(arr1);

    return 0;
}
