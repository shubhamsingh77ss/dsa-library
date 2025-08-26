//write a program for passing an array to a function
#include<stdio.h>
int main()
{
    int arr[]={10,15,25,90,120};
    int n;
    void sample(int *);//prototype
    sample(arr);
    for(n=0;n<5;n++)
    {
        printf("arr[%d]=%d\n",n,arr[n]);
    }
}
void sample(int pnt[])// we can also write *pnt
{
    int n;
    for(n=0;n<5;n++)
    {
        pnt[n]=pnt[n]+100;//same as *(pnt+n)=*(pnt+n)+100;
    }
    
}
