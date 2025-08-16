//Program to Initialize and Display a 3x3 Matrix in C
#include<stdio.h>
int main()
{
    // Declare and initialize a 3x3 matrix (2D array)
    int arr[][3] =
    {
        {1, 2, 3},
        {11, 22, 33},
        {111, 222, 333}
    };

    // Message before displaying the matrix
    printf("For Displaying\n");

    // Loop through rows
    for(int i = 0; i < 3; i++)
    {
        // Loop through columns
        for(int j = 0; j < 3; j++)
        {
            // Print each element with tab spacing
            printf("%d\t\t", arr[i][j]);
        }
        // Newline after each row
        printf("\n");
    }
}
