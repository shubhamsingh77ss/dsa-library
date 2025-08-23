//program to calculate student percentage using structures
#include<stdio.h>

int main()
{
    // Structure declaration with one variable (svar)
    struct students
    {
        unsigned long reg_no;  // Student registration number
        float mk1, mk2, mk3;   // Marks in 3 subjects
    } svar;

    float pc; // variable to store percentage

    // Input student details
    printf("Enter the registration number and marks in 3 subjects:\n");
    scanf("%lu%f%f%f", &svar.reg_no, &svar.mk1, &svar.mk2, &svar.mk3);

    // Calculate percentage
    pc = (svar.mk1 + svar.mk2 + svar.mk3) / 300 * 100;

    // Display result
    printf("Percentage = %.2f%%\n", pc);

    return 0;
}
