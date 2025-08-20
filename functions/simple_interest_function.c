//program to calculate simple interest using a user-defined function in C
#include<stdio.h>

// Function prototype
float getinterest(float, int, float);

int main()
{
    float pmt, roi, sint;
    int tm;

    // Input values
    printf("Enter the principal amount, time, and rate of interest: ");
    scanf("%f %d %f", &pmt, &tm, &roi);

    // Call user-defined function to calculate simple interest
    sint = getinterest(pmt, tm, roi);

    // Print result
    printf("Simple Interest = %.2f", sint);

    return 0;
}

// Function definition to calculate simple interest
float getinterest(float pmt1, int tm1, float roi1)
{
    float s = (pmt1 * roi1 * tm1) / 100; // formula: (P × R × T)/100
    return s;
}
