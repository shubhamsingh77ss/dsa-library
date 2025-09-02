// Program: Store and display temperatures of the last 10 days

#include <stdio.h>

int main() {
    float temp[10]; // float because temperature can have decimals
    int n = 0;
    // Input temperatures
    while (n < 10) {
        printf("Enter the temperature of day %d: ", n + 1);
        scanf("%f", &temp[n]);
        n++;
    }

    // Reset counter
    n = 0;

    // Output temperatures
    while (n < 10) {
        printf("The temperature of day %d = %.2f\n", n + 1, temp[n]);
        n++;
    }
