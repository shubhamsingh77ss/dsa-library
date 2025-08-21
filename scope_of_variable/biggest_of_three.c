// program to find the biggest of three numbers (demonstrating comma operator pitfall)
#include<stdio.h>

// Function prototype
int getbiggest(int, int, int);

int main()
{
    int x, y, z, biggest;

    printf("Input any three values: ");
    scanf("%d %d %d", &x, &y, &z);

    biggest = getbiggest(x, y, z);

    printf("The Biggest value is %d\n", biggest);

    return 0;
}

int getbiggest(int x, int y, int z)
{
    if (x > y)
        if (x > z)
            // Pitfall: comma operator returns only the last value (x)
            return y, z, x;
        else
            return z;

    if (y > z)
        return y;
    else
        return z;
}
