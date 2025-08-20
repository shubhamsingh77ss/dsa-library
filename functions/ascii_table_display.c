//program to display ASCII values using a user-defined function in C
#include<stdio.h>

// Function to display ASCII values
void display()
{
    int a = 0;

    // Loop through all ASCII values (0–255)
    while (a <= 255)
    {
        printf("[%d] = [%c]\n", a, a);
        a++;
    }
}

int main()
{
    // Call user-defined function
    display();

    return 0;
}
