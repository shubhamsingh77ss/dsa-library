//write a program to showcase the pointer to pointer variable
#include<stdio.h>
int main()
{
    int val=1000,*pnt,**ppnt;
    pnt=&val;
    ppnt=&pnt;
    printf("Address of val=%u\n",pnt);
    printf("value of val=%d\n",*pnt);
    printf("Address of the pointer variable=%u\n",ppnt);
    printf("Value of the pointer variable=%d\n",*ppnt);
    printf("Value of the pointer to pointer variable=%u\n",**ppnt);
    
}
