//program to calculate IELTS band average using structures
#include<stdio.h>
#include<string.h>

// Structure definition for IELTS candidate
struct IELTS
{
    char reg_no[15];   // Candidate registration number
    float bnd1;        // Band score 1
    float bnd2;        // Band score 2
    float bnd3;        // Band score 3
};

// Function prototype (structure passed by value)
float score_avg(struct IELTS);

int main()
{
    struct IELTS ivar;     // Structure variable
    float band_avg;

    // Input candidate details
    printf("Enter Registration No:\n");
    fgets(ivar.reg_no, sizeof(ivar.reg_no), stdin);

    printf("Enter 3 band scores:\n");
    scanf("%f %f %f", &ivar.bnd1, &ivar.bnd2, &ivar.bnd3);

    // Function call to calculate average
    band_avg = score_avg(ivar);

    // Display average band score
    printf("Average of bands scored = %.2f\n", band_avg);

    return 0;
}

// Function to calculate average band score
float score_avg(struct IELTS dvar)
{
    float avg = (dvar.bnd1 + dvar.bnd2 + dvar.bnd3) / 3;
    return avg;
}
