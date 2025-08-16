// Write a program thta reads random values into an array , perform bubblesort in such a way that ifthe array is sorted in less than 
//n-1 passes ,then the rest of passes should be discarded.

//Program to Sort Marks using Optimized Bubble Sort 
#include<stdio.h>
#define MX 10

int main()
{
    int marks[MX], i, j, temp, flag = 0;

    // Input marks into the array
    for(i = 0; i < MX; i++)
    {
        printf("marks[%d] = ", i);
        scanf("%d", &marks[i]);
    }

    // Optimized Bubble Sort (Ascending Order)
    for(i = 0; i < MX - 1; i++) // Outer loop for passes
    {
        for(j = 0; j < (MX - i) - 1; j++) // Inner loop for comparisons
        {
            if(marks[j] > marks[j + 1]) // Swap if out of order
            {
                temp        = marks[j];
                marks[j]    = marks[j + 1];
                marks[j+1]  = temp;
                flag = 1; // Swap happened
            }
        }

        // If no swaps occurred, break early (array is sorted)
        if(flag == 0)
            break;
        else
            flag = 0; // Reset flag for next pass
    }

    // Print sorted marks
    printf("Sorted Marks (Ascending Order):\n");
    for(i = 0; i < MX; i++)
    {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}
