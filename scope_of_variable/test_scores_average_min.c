//program to calculate average of three test scores and print the minimum
#include<stdio.h>

// Global variables for test scores
int tsc1, tsc2, tsc3;

// Function prototypes
void first();
void second();

// Function to calculate and print average score
void first()
{
    float avg;
    // Correct average calculation using 3.0 (float division)
    avg = (tsc1 + tsc2 + tsc3) / 3.0;
    printf("Average score = %.2f\n", avg);

    // Call function to calculate minimum
    second();
}

// Function to find and print the minimum score
void second()
{
    if (tsc1 < tsc2 && tsc1 < tsc3)
    {
        printf("Minimum score = %d\n", tsc1);
    }
    else if (tsc2 < tsc3 && tsc2 < tsc1)
    {
        printf("Minimum score = %d\n", tsc2);
    }
    else
    {
        printf("Minimum score = %d\n", tsc3);
    }
}

int main()
{
    printf("Enter the scores in 3 tests: ");
    scanf("%d %d %d", &tsc1, &tsc2, &tsc3);

    // Call first() to start computation
    first();

    return 0;
}
