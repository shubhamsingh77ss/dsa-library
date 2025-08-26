//write a program to show the local variable scope..
#include<stdio.h>
int main()
{
    int n=200;
    void sample();
    sample();
    printf("Value of n=%d",n);
}
void sample()
{
    int n=100;
    printf("Value of n=%d\n",n);
}
