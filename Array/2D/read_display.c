//Program to Read and Display a 3x3 Matrix

#include<stdio.h>
int main()
{
    int arr[3], i, j;

    // Input elements into a 3x3 matrix
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3; ++j)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the matrix in proper format
    printf("Here we are displaying the Matrix\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]); // Display element with tab spacing
        }
        printf("\n"); // Newline after each row
    }
}
