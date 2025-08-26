//write a program to calculate simple interest as per the given principal amount,rate of interest and time
#include<stdio.h>
int main()
{
    float pmt,roi,sint;
    int tm;
    float getinterest(float,int,float);//function prototype
    printf("Enter the principal amount, rate of interest and time=\n");
    scanf("%f%f%d",&pmt,&roi,&tm);
    sint=getinterest(pmt,tm,roi);
    printf("Simple Interest=%.2f",sint);
}
float getinterest(float pmt1,int tm1,float roi1)
{
    float s=(pmt1*roi1*tm1)/100;
    return s;
}
