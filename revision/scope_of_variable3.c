//write a program to check the gloabal variable scope
#include<stdio.h>
int n=1000;
int main()
{
    void sample();
    printf("Value of n=%d\n",n);
    sample();
}
void sample()
{
    void check();
    printf("Value of n=%d\n",n);
    check();
}
void check()
{
    printf("Value of n=%d\n",n);
}
