//program to demonstrate dynamic memory reallocation using realloc in C
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *values;
    int c;

    // Allocate memory for 3 integers
    values = (int *)malloc(sizeof(int) * 3);

    // Check if memory allocation succeeded
    if (values == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input first 3 values
    for (c = 0; c < 3; c++)
    {
        printf("Values[%d] = ", c);
        scanf("%d", &values[c]);
    }

    // Reallocate memory to hold 5 integers
    values = (int *)realloc(values, sizeof(int) * 5);

    // Check if reallocation succeeded
    if (values == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("\n--------------\n");

    // Input values for the new elements (index 3 and 4)
    for (c = 3; c < 5; c++)
    {
        printf("Values[%d] = ", c);
        scanf("%d", &values[c]);
    }

    printf("\n-------------\n");

    // Print all 5 values
    for (c = 0; c < 5; c++)
    {
        printf("%d\t", *(values + c));
    }

    // Free the allocated memory
    free(values);

    return 0;
}
