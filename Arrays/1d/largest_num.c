//Program to Find the Largest Number in an Array
#include<stdio.h>
int main()
{
    int n, count;
    
    // Ask the user for the size of the array
    printf("Enter the size of the array ");
    scanf("%d",&n);

    int arr[n]; // Declare an array of size 'n'

    // Input elements of the array
    for(count = 0; count < n; count++)
    {
        printf("arr[%d]=", count);
        scanf("%d", &arr[count]);
    }

    // Initialize biggest with the first element
    int biggest = arr[0];

    // Traverse the array to find the largest number
    for(count = 0; count < n; count++)
    {
        if(arr[count] > biggest)
        {
            biggest = arr[count]; // Update biggest value
        }
    }

    // Print the largest value
    printf("biggest value= %d", biggest);
}
