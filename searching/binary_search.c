//Program to Perform Binary Search in an Array
#include<stdio.h>
int main()
{
    int a[10], lft = 0, rt = 9, md = (lft + rt) / 2, val, i;

    // Input the array elements (NOTE: binary search requires the array to be sorted!)
    printf("Enter the Value to be entered in the array\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Input the value to search
    printf("Enter the Value to be searched\n");
    scanf("%d", &val);

    // Binary Search logic
    while(lft <= rt)
    {
        if(val > a[md])
        {
            lft = md + 1;   // Search in right half
        }
        else if(val < a[md])
        {
            rt = md - 1;    // Search in left half
        }
        else
        {
            // If found
            printf("Found at the Location number = %d\n", md + 1); // 1-based position
            break;
        }
        // Recalculate mid after updating boundaries
        md = (lft + rt) / 2;
    }

    // If not found
    if(lft > rt)
    {
        printf("No Such value is found in that array\n");
    }
}
