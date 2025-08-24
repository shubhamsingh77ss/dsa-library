//write a program to show pointers substraction , subtracting two pointer variables after literal substartcion , result will be divided by the size of the data..
#include<stdio.h>
int main()
{
    int arr[]={100,200,300,400,500};
    int n=&arr[4]-&arr[2];
    printf("n=%d\n",n);
    double amount[]={100,200,300,400,500};
    n=&amount[4]-&amount[2];
    printf("n=%d\n",n);
}
//Pointer subtraction = index difference (step count in terms of array elements).
//Not "bytes difference", and not "strictly between count".
