//program to count even numbers in an array using function
#include<stdio.h>
#define SZ 15   // Macro defining size of array

// Function to count how many elements are even
int howmany(int darr[])
{
    int n, count = 0;

    // Traverse the array
    for(n = 0; n < SZ; n++)
    {
        // If element is divisible by 2, it is even
        if(darr[n] % 2 == 0)
        {
            count++;
        }
    }    
    return count; // Return number of even numbers found
}

int main()
{
    // Declare and initialize array
    int arr[] = {10,12,15,13,19,100,200,31,32,71,90,85,22,1000,21};
    int count;

    // Call function to count even numbers
    count = howmany(arr);

    // Display result
    printf("Number of even = %d", count);
}
