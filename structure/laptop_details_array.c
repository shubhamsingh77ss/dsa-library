//program to input and display laptop details using array of structures
#include<stdio.h>

int main()
{
    // Structure definition inside main
    struct laptops
    {
        int RAM;          // RAM size in GB
        int HDD_SPACE;    // HDD space in GB
        float PRICE;      // Price in currency
    };

    // Declare an array of structures for 3 laptops
    struct laptops sr[3];
    int n;

    // Input details of each laptop
    for(n = 0; n < 3; n++)
    {
        printf("Enter RAM, HDD_SPACE and PRICE of laptop %d:\n", n+1);
        scanf("%d %d %f", &sr[n].RAM, &sr[n].HDD_SPACE, &sr[n].PRICE);
    }

    // Display details of all laptops
    printf("\n--- Laptop Details ---\n");
    for(n = 0; n < 3; n++)
    {
        printf("RAM = %3d GB\t HDD_SPACE = %4d GB\t PRICE = %10.2f\n",
               sr[n].RAM, sr[n].HDD_SPACE, sr[n].PRICE);
    }

    return 0;
}
