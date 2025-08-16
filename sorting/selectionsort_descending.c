//Program to Sort an Array in Descending Order using Selection Sort 
#include<stdio.h>
int main()
{
    int a[10], i, j, temp;

    // Input 10 array elements
    printf("Enter the values in the array\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Selection Sort Logic (Descending Order)
    // Outer loop -> passes
    for(i = 0; i < 9; i++)
    {
        // Inner loop -> compares with remaining elements
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] < a[j]) // If larger element is found, swap
            {
                temp  = a[i];
                a[i]  = a[j];
                a[j]  = temp;
            }
        }
    }

    // Print sorted array
    printf("Array after Selection Sort (Descending Order):\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
