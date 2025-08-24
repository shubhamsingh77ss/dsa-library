//Write a program to initialization of the pointer variable
#include<stdio.h>
int main()
{
    int *pt;
    int a=100;
    float *ptt;
    float b=100.90;
    char *pttt;
    char ch='A';
    pt=&a;
    ptt=&b;
    pttt=&ch;
    printf("Address of a = %u\n",pt);
    printf("Address of b = %u\n",ptt);
    printf("Address of ch = %u\n",pttt);
}
