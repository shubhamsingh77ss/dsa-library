//program to find minimum temperature among three days using a function in C
#include<stdio.h>

// Function prototype
void mintemp(float, float, float);

int main()
{
    float temp1, temp2, temp3;

    // Input temperatures
    printf("Enter the temperature of 3 consecutive days: ");
    scanf("%f %f %f", &temp1, &temp2, &temp3);

    // Call user-defined function
    mintemp(temp1, temp2, temp3);

    return 0;
}

// Function definition to find minimum temperature
void mintemp(float t1, float t2, float t3)
{
    if (t1 < t2)
    {
        if (t1 < t3)
            printf("First day had minimum temperature");
        else
            printf("Third day had minimum temperature");
    }
    else
    {
        if (t2 < t3)
            printf("Second day had minimum temperature");
        else
            printf("Third day had minimum temperature");
    }
}
