//This program demonstrates how arrays can be 
//passed to functions in C using pointers. 
//The function `sample()` increments each 
//element of the array by 100 using pointer 
//arithmetic.
#include<stdio.h>

int main()
{
    int arr[]={10,15,25,90,120}; // Array declaration and initialization
    int n;

    // Function prototype
    void sample(int *);

    // Passing the array base address (call by reference)
    sample(arr);

    // Printing updated array elements
    for(n=0;n<5;n++)
    {
        printf("arr[%d]=%d\n",n,arr[n]);
    }
}

// Function Definition
// Demonstrates updating array elements using pointers
void sample(int *pnt) // you can also use pnt[]
{
    int n;
    for(n=0;n<5;n++)
    {
        // Accessing elements using pointer arithmetic and updating them
        *(pnt+n) = *(pnt+n) + 100; 
        // same as pnt[n] = pnt[n] + 100
    }
}
