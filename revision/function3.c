//write a program to calculate factorial using functions
#include<stdio.h>
int main()
{
    int num,fct;
    int calfct(int);//prototype
    printf("Enter the number ");
    scanf("%d",&num);
    fct=calfct(num);
    printf("Factorial of %d=%ld",num,fct);
}
int calfct(int num1)
{
    int f=1;
    while(num1>=2)
    {
        f=f*num1;
        num1--;
    }
    return f;
}
