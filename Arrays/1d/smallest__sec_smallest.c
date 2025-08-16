//Program to Find the Smallest and Second Smallest Numbers in an Array
#include<stdio.h>
int main()
{
    float a[10];
    float smallest, sec_smallest;
    int i;

    // Input 10 elements
    for(i = 0; i < 10; i++)
    {
        printf("num[%d]=", i);
        scanf("%f", &a[i]);
    }

    // Assume the first element is the smallest
    smallest = a[0];

    // Find the smallest element (semicolon removed ✅)
    for(i = 0; i < 10; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    // Initialize second smallest based on first check
    if(smallest == a[0])
        sec_smallest = a;
    else
        sec_smallest = a;

    // Find the second smallest element
    for(i = 0; i < 10; i++)
    {
        if(a[i] < sec_smallest && a[i] != smallest)
            sec_smallest = a[i];
    }

    // Print results
    printf("smallest element=%f\n second smallest=%f", smallest, sec_smallest);
}
