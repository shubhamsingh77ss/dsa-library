//Program for Binary Search in a Descending Sorted Array
#include<stdio.h>
int main()
{
    int a[10], lft = 0, rt = 9, md = (lft + rt) / 2, val, i;

    // Input 10 array elements (should be sorted in DESCENDING order for correct results)
    printf("Enter the Value to be entered in the array\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Input the value to search for
    printf("Enter the Value to be searched\n");
    scanf("%d", &val);

    // Binary search logic for descending order
    while(lft <= rt)
    {
        if(val < a[md])
        {
            lft = md + 1;   // Search right half (for descending order)
        }
        else if(val > a[md])
        {
            rt = md - 1;    // Search left half (for descending order)
        }
        else
        {
            printf("Found at the Location number = %d\n", md + 1); // 1-based index
            break;
        }
        md = (lft + rt) / 2;
    }

    // If value not found
    if(lft > rt)
    {
        printf("No Such value is found in that array\n");
    }
}
