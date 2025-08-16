//Program to Multiply Two 3x3 Matrices in C
#include<stdio.h>
int main()
{
    // First 3x3 matrix
    int arr[][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Second 3x3 matrix
    int arr2[] =
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Resultant matrix c to store multiplication result
    int c, sum = 0, i, j, k;

    // Matrix multiplication logic
    for(i = 0; i < 3; i++)         // For each row of first matrix
    {
        for(j = 0; j < 3; j++)     // For each column of second matrix
        {
            for(k = 0; k < 3; k++) // Multiply row element with column element
            {
                sum = sum + arr[i][k] * arr2[k][j];
            }
            c[i][j] = sum; // Store the computed value
            sum = 0;       // Reset sum for next element
        }
    }

    // Display the resultant matrix
    printf("Displaying here \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]); // Print each element with tab spacing
        }
        printf("\n"); // Newline after each row
    }
}
