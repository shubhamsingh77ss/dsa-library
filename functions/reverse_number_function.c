//program to reverse a number using a user-defined function in C
#include<stdio.h>

// Function prototype
void getreverse(long);

int main()
{
    long num;

    // Input number
    printf("Enter the number: ");
    scanf("%ld", &num);

    // Call user-defined function to print reverse
    getreverse(num);

    return 0;
}

// Function definition to print number in reverse
void getreverse(long num1)
{
    int r;

    while (num1 != 0)
    {
        r = num1 % 10;       // extract last digit
        printf("%d", r);     // print digit
        num1 = num1 / 10;    // remove last digit
    }
}
