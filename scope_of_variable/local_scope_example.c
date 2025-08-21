//program demonstrating local variable scope in functions
#include<stdio.h>

// Function prototypes
int first();
void second();

int main()
{
    printf("We are seeing the scope of variable over here\n");
    first();   // prints local 'a' from first()
    second();  // prints local 'a' from second()
}

// Function with local variable 'a'
int first()
{
    int a = 900;  // local scope to first()
    printf("%d\n", a);
    return 0;
}

// Another function with its own local variable 'a'
void second()
{
    int a = 1000; // local scope to second()
    printf("%d\n", a);
}
