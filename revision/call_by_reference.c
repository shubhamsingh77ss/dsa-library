//Write a program to show the call by reference
#include<stdio.h>
int main()
{
    void somedata(int *,int *);//prototype
    int a=100;
    int b=1000;
    somedata(&a,&b);
    printf("Values of a and b after returning from the functions=%d\t %d\n\n",a,b);
}
void somedata(int *a1,int *b1)
{
    *a1=*a1+10;
    *b1=*b1*10;
    printf("Values of formal parameters a1 and b1=%d\t %d\n\n",*a1,*b1);
}
