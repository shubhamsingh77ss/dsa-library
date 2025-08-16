//Program to Perform Linear Search in an Array
#include<stdio.h>
int main()
{
    int a[10], i, val;

    // Input the array elements
    printf("Enter the array Elements:\n");
    for(i = 0; i < 10; i++)
    {
       printf("a[%d] = ", i);
       scanf("%d", &a[i]);
    }

    // Input the value to be searched
    printf("Enter the Value to be Searched:\n");
    scanf("%d", &val);

    // Perform linear search
    for(i = 0; i < 10; i++)
    {
        if(a[i] == val)   // Compare each element
        {
            printf("Value is found at the location = %d\n", i + 1); // 1-based index
            break; // Exit once found
        }
    }

    // If loop ends without finding the element
    if(i == 10)
    {
        printf("No such value exists in the given array");
    }
}
