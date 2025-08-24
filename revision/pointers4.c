//write a program to understand the pointer arithmetic
#include<stdio.h>
int main()
{
    float a=100.0,*fp;
    fp=&a;
    printf("Address =%u\t value=%.2f\n",fp,*fp);
    fp++;
    printf("Address =%u\t value=%.2f\n",fp,*fp);
}
