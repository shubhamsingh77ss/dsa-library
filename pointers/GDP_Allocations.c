//program to dynamically store and display GDP values of countries using malloc in
#include <stdio.h>
#include <stdlib.h>    // required for malloc() and exit()

int main()
{
    int n, i;
    long double *GDP;  // pointer for dynamically allocated array

    // Ask user for number of countries
    printf("Enter the number of countries: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n long double values
    GDP = (long double *) malloc(sizeof(long double) * n);

    // Check if malloc failed
    if (GDP == NULL)
    {
        printf("Dynamic memory allocation failed... exiting.\n");
        exit(0);  // terminate the program
    }

    // Input GDP values
    for (i = 0; i < n; ++i)
    {
        printf("Enter the GDP of country number %d: ", i + 1);
        scanf("%Lf", &GDP[i]);
    }

    // Output GDP values
    printf("\n----------------- GDP Report -----------------\n");
    for (i = 0; i < n; ++i)
    {
        printf("GDP of country number %d is %.2Lf\n", i + 1, GDP[i]);
    }

    // Free the allocated memory
    free(GDP);

    return 0;
}
