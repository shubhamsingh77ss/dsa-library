//a program to shhowcase the concept of call by reference
#include<stdio.h>
int main()
{
    void updation(int *,int *,float *, float *);
    int a,b;
    float c,d;
    printf("Enter the values of a(int),b(int),c(float),d(float)=\n");
    scanf("%d %d %f %f",&a,&b,&c,&d);
    updation(&a,&b,&c,&d);
    printf("\nUpdated values in the calling Function\n");
    printf("a=%d\n b=%d\n c=%f d=%f",a,b,c,d);
}
void updation(int *a1,int *b1,float *c1,float *d1)
{
    *a1=*a1+4;
    *b1=*b1+4;
    *c1=*c1+4;
    *d1=*d1+4;
    
}
