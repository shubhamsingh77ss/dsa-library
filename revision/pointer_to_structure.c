//write a program to demonstrate pointer to structure
#include<stdio.h>
#include<string.h>
int main()
{
    struct sales
    {
        char salesman_code[10];
        float jan_sales,feb_sales,mar_sales;
    };
    struct sales sv;//declaration of structure variable
    struct sales *pt;//declaration of pointer to structure
    pt=&sv;
    strcpy(pt->salesman_code,"MY001");
    pt->jan_sales=12000.00;
    pt->feb_sales=12500.00;
    pt->mar_sales=12500.00;
    puts(pt->salesman_code);
    printf("January sales=%10.2f\n",pt->jan_sales);
    printf("Feburary sales=%10.2f\n",pt->feb_sales);
    printf("March sales=%10.2f\n",pt->mar_sales);
    
}
