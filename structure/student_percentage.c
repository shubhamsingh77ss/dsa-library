//program to calculate percentage of a student using structure
#include<stdio.h>

int main()
{
    // Structure definition to hold student data
    struct students
    {
        unsigned long reg_no;  // Registration number
        float mk1, mk2, mk3;   // Marks in 3 subjects
    };

    struct students svar; // Declare structure variable
    float pc;             // To store calculated percentage

    // Input student details
    printf("Enter the registration number, marks in 3 subjects\n");
    scanf("%lu %f %f %f", &svar.reg_no, &svar.mk1, &svar.mk2, &svar.mk3);

    // Calculate percentage
    pc = (svar.mk1 + svar.mk2 + svar.mk3) / 300 * 100;

    // Output result
    printf("Percentage = %.2f", pc);

    return 0;
}
