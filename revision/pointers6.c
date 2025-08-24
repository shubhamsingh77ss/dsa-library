//write a program to represent the array and pointers
#include<stdio.h>
int main()
{
    int arr[]={100,200,900};
    printf("Base Address =%u\n",arr);
    printf("Address of the second element=%u\n",arr+1);
    printf("Address of the third element=%u\n",arr+2);
    printf("Value of the first element=%d\n",*arr);
    printf("Value of the second element=%d\n",*(arr+1));
    printf("Value of the third element=%d\n",*(arr+2));
}
