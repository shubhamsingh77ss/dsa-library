//program to calculate sum of three numbers using a user-defined function in C
#include<stdio.h>

// Function prototype (declaration)
int sumfnc(int, int, int);

int main()
{
    int a, b, c, sum;

    // Input values
    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Call user-defined function to compute sum
    sum = sumfnc(a, b, c);

    // Print result
    printf("Sum = %d", sum);

    return 0;
}

// Function definition
int sumfnc(int a1, int b1, int c1)
{
    int tot;
    tot = a1 + b1 + c1;  // compute sum
    return tot;          // return result
}
