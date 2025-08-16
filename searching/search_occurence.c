//Program to Search and Count Occurrences of an Element in an Array
#include<stdio.h>
#define MX 10   // Define maximum size as 10

int main()
{
    int a[MX], i, val, occ = 0;

    // Input array elements
    printf("Enter the Values of the array\n");
    for(i = 0; i < MX; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Input value to search
    printf("Enter the Value to be searched\n");
    scanf("%d", &val);

    // Search for all occurrences of 'val'
    for(i = 0; i < MX; i++)
    {
        if(a[i] == val)
        {
            printf("Found at the Location number %d\n", i + 1); // 1-based index
            occ++; // Increment occurrence count
        }
    }

    // If not found
    if(occ == 0)
    {
        printf("No such Value exists in the array\n");
    }
    else
    {
        // Print the number of times the value was found
        printf("Number of occurrence = %d", occ);
    }
}
