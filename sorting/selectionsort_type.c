// Write a program that reads sales of MX number of salespersonin an array. Now display all the sales amounts in descending oreder use
//a selection sort logic
//Program to Sort Sales Data in Descending Order
#include<stdio.h>
#define MX 10

int main()
{
    int sales[MX], i, j, temp;

    // Input the sales data
    for(i = 0; i < MX; i++)
    {
        printf("sales[%d] = ", i);
        scanf("%d", &sales[i]);
    }

    // Sorting logic (Selection Sort - Descending Order)
    for(i = 0; i < MX - i; i++)  // Outer loop for passes
    {
        for(j = i + 1; j < MX; j++)  // Inner loop compares remaining elements
        {
            if(sales[i] < sales[j])  // Swap if right element is greater
            {
                temp      = sales[i];
                sales[i]  = sales[j];
                sales[j]  = temp;
            }
        }
    }

    // Display sorted sales array
    printf("Sorted Sales Data (Descending Order):\n");
    for(i = 0; i < MX; i++)
    {
        printf("Sales[%d] = %d\n", i, sales[i]);
    }

    return 0;
}
