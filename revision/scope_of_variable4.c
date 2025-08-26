//program to show the fact that any change happens in global variable will be visible everywhere
#include<stdio.h>
int n=1000;
int main()
{
    void sample();
    printf("Value of n in main=%d\n",n);
    sample();
    printf("Value of n in main=%d\n",n);
    
}
void sample()
{
    void check();
    printf("Value of n in sample=%d\n",n);
    check();
    printf("Value of n in sample=%d\n",n);
}
void check()
{
    printf("Value of n in check=%d\n",n);
    n+=500;
    printf("Value of n in check=%d\n",n);
}
