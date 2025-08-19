//add program to iterate over array using pointer arithmetic in C
#include<stdio.h>

int main()
{
    // Declare and initialize integer array
    int arr[] = {100, 200, 900};

    // Loop through the array using pointer arithmetic
    for (int i = 0; i < 3; i++)
    {
        // Print address (arr+i) and value (*(arr+i))
        printf("%u = %d\n", (arr + i), *(arr + i));
    }

    return 0;
}
