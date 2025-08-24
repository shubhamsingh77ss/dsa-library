//program to calculate employee net salary using structure pointers
#include<stdio.h>

// Structure definition for employee
struct employees
{
    unsigned int emp_code; // Employee code
    int basic_sal;         // Basic salary
    float hra;             // House Rent Allowance
    float pf;              // Provident Fund deduction
    float bonus;           // Bonus
};

// Function prototype (structure passed by pointer)
float get_netsalary(struct employees *);

int main()
{
    struct employees evar;   // Structure variable
    float net_sal;

    // Input employee details
    printf("Enter the employee code, basic salary, HRA, PF and bonus:\n");
    scanf("%u%d%f%f%f", &evar.emp_code, &evar.basic_sal, &evar.hra, &evar.pf, &evar.bonus);

    // Call function to calculate net salary
    net_sal = get_netsalary(&evar);

    // Display the result
    printf("Net Salary = %8.2f\n", net_sal);

    return 0;
}

// Function to calculate net salary (using pointer)
float get_netsalary(struct employees *fvar)
{
    float net_sal1;
    net_sal1 = fvar->basic_sal + fvar->hra + fvar->bonus - fvar->pf;
    return net_sal1;
}
