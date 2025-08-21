//program to demonstrate call by reference with multiple parameters
#include<stdio.h>

// Function prototype: accepts two int pointers and two float pointers
void updation(int *, float *, int *, float *);

int main()
{
    int a, b;
    float c, d;

    printf("Enter the values of a, b, c and d\n");
    scanf("%d %d %f %f", &a, &b, &c, &d);

    // Passing addresses of variables (Call by Reference)
    updation(&a, &c, &b, &d);

    printf("\n Updated values in the calling function\n");
    printf("a=%d\n c=%.2f\n b=%d\n d=%.2f", a, c, b, d);
}

// Function Definition
// Updates the variables directly using pointers
void updation(int *ap, float *cp, int *bp, float *dp)
{
    *ap = *ap * 4;   // multiply 'a' by 4
    *dp = *dp * 4;   // multiply 'd' by 4
    *bp = *bp / 2;   // divide 'b' by 2
    *cp = *cp / 2;   // divide 'c' by 2
}
