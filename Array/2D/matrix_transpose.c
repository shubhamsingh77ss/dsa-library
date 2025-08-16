//Program to Find Transpose of a 3x3 Matrix in C
#include<stdio.h>

// Function to compute transpose of a 3x3 matrix
void transpose(int x[][3])
{
    int y, i, j;

    // Transpose logic: swap rows and columns
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            y[i][j] = x[j][i];
        }
    }

    // Display transposed matrix
    printf("Displaying here\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", y[i][j]); // Tab-separated output
        }
        printf("\n");
    }
}

int main()
{
    // Original 3x3 matrix
    int arr[][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call transpose function
    transpose(arr);
}
