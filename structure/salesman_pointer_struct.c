//program demonstrating use of pointer to structure in C
#include<stdio.h>
#include<string.h>

int main()
{
    // Structure definition
    struct sales
    {
        char salesman_code[10];   // Salesman unique code
        float jan_sales;          // Sales in January
        float feb_sales;          // Sales in February
        float mar_sales;          // Sales in March
    };

    // Declaration of structure variable
    struct sales sv;

    // Declaration of pointer to structure
    struct sales *pt;

    // Assign address of structure variable to pointer
    pt = &sv;

    // Assign values using pointer to structure
    strcpy(pt->salesman_code, "NY001");
    pt->jan_sales = 12000.0;
    pt->feb_sales = 10000.0;
    pt->mar_sales = 90000.0;

    // Display salesman code and sales data
    puts(pt->salesman_code);
    printf("January Sales   = %10.2f\n", pt->jan_sales);
    printf("February Sales  = %10.2f\n", pt->feb_sales);
    printf("March Sales     = %10.2f\n", pt->mar_sales);

    return 0;
}
