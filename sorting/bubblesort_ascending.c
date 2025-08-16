//Program to Sort an Array using Bubble Sort
#include<stdio.h>
int main()
{
    int a[10], i, j, temp;

    // Input array elements
    printf("Enter the values in the array\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Bubble Sort Logic
    // Outer loop controls number of passes (n-1 passes for n elements)
    for(i = 0; i < 9; i++)
    {
        // Inner loop compares adjacent elements
        for(j = 0; j < (9 - i); j++)
        {
            if(a[j] > a[j+1])  // Swap if elements are out of order
            {
                temp   = a[j];
                a[j]   = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Array after Bubble Sort:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
}
