/*
 * Program Name : ielts_band_average_pointer.c
 * Description  : This program calculates the average IELTS band score of a candidate
 *                using structures and functions (pass by pointer).
 *
 * Author       : [Your Name]
 * Date         : [Current Date]
 */

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

// Function prototype (structure pointer as parameter)
float score_avg(struct IELTS *);

int main()
{
    struct IELTS ivar;     // Structure variable
    float band_avg;

    // Input candidate details
    printf("Enter Registration No:\n");
    fgets(ivar.reg_no, sizeof(ivar.reg_no), stdin);

    printf("Enter 3 band scores:\n");
    scanf("%f %f %f", &ivar.bnd1, &ivar.bnd2, &ivar.bnd3);

    // Function call with pointer to structure
    band_avg = score_avg(&ivar);

    // Display average band score
    printf("Average of bands scored = %.2f\n", band_avg);

    return 0;
}

// Function to calculate average band score (using pointer)
float score_avg(struct IELTS *dvar)
{
    float avg = (dvar->bnd1 + dvar->bnd2 + dvar->bnd3) / 3;
    return avg;
}

/*
Sample Input:
Enter Registration No:
IELTS2025
Enter 3 band scores:
6.5 7.0 8.0

Sample Output:
Average of bands scored = 7.17
*/
