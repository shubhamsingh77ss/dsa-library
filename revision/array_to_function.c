//write a program that passes an array to a function return thr number of even elements;
#include<stdio.h>
#define SZ 5
int howmany(int darr[])
{
    int n,count=0;
    for(n=0;n<SZ;n++)
    {
        if(darr[n]%2==0)
        {
            ++count;
        }
    }
    return count;
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
    }
    int count;
    count=howmany(arr);
    printf("Number of even=%d",count);
}
