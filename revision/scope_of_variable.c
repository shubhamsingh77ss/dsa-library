//write a program to show local varaibel scope
#include<stdio.h>
int main()
{
    void sample();
    sample();
    //printf("Value of n=%d",n);
}
void sample()
{
    int n=100;
    printf("Value of n=%d",n);
}
