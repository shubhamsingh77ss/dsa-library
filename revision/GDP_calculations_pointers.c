//Write a program that asks from the user number of countries . Then declare an array called GDP with as much size. Now read and print
//the gross domestic products of the countries
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    long double *GDP;
    printf("Enter the number to countries\n");
    scanf("%d",&n);
    GDP=(long double*)malloc(sizeof(long double)*n);
    if(GDP==NULL)
    {
        printf("Dynamic Memory Allocation resulted in failure,exiting");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the GDP of country %d=",i+1);
        scanf("%LF",&GDP[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n GDP of the country %d is %.2LF",i+1,GDP[i]);
    }
}
