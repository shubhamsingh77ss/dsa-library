//Program: Reads numbers from the user into an array and print their sum and average
#include <stdio.h>
int main()
{
    int arr[10], sum = 0;
    int count = 0;

    while (count < 10)
    {
        printf("Enter a number = ");
        scanf("%d", &arr[count]);
        sum = sum + arr[count];
        count++;
    }

    float average = sum / 10.0; // use 10.0 for float division
    printf("Sum = %d | Average = %.2f\n", sum, average);

    return 0;
}
