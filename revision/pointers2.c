// write a program to learn about derefernce operator
#include<stdio.h>
int main()
{
    int a=100,*ip;
    float b=100.90,*fp;
    ip=&a;
    fp=&b;
    printf("value of a=%d\n",*ip);
    printf("value of b=%.2f\n",*fp);
}
