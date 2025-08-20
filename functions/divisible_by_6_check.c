//program to check if a number is divisible by 6 using a function
#include<stdio.h>

// Function prototype
char divby6(int);

int main()
{
    int num;
    char ch;

    // Input number
    printf("Enter the number: ");
    scanf("%d", &num);

    // Call function to check divisibility
    ch = divby6(num);

    // Print result based on returned character
    if (ch == 'y')
    {
        printf("Divisible by 6");
    }
    else
    {
        printf("Not Divisible by 6");
    }

    return 0;
}

// Function definition
char divby6(int val)
{
    if (val % 6 == 0)
        return 'y';   // divisible
    else
        return 'n';   // not divisible
}
