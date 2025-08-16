//Program to Add Two 3x3 Matrices in C
#include<stdio.h>
int main()
{
    // First 3x3 matrix
    int arr[][3] =
    {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    // Second 3x3 matrix
    int arr2[] =
    {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    // Resultant matrix for storing addition
    int c, i, j;

    // Adding two matrices element-wise
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    // Displaying the resultant matrix
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
