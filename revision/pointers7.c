//write a program that illustrates the fact that an array name is pointer to the base address
#include<stdio.h>
int main()
{
    int arr[]={100,200,300};
    for(int i=0;i<3;i++)
    {
        printf("%u=%d\n",(arr+i),*(arr+i));
    }
}
