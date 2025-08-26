//write a program to enter the temperature of 3 consecutive days and then find the minimum temperature among them 
//using functions
#include<stdio.h>
int main()
{
    float temp1,temp2,temp3;
    void mintemp(float,float,float);
    printf("Enter the temperature of 3 consecutive days=");
    scanf("%f %f %f",&temp1,&temp2,&temp3);
    mintemp(temp1,temp2,temp3);
}
void mintemp(float t1,float t2,float t3)
{
    if(t1<t2)
    {
        if(t1<t3)
        {
            printf("First day has the minimum temperature\n");
        }
        else
        {
            printf("Third day has the minimum temperature\n");
        }
    }
    else
    {
        if(t2<t3)
        {
            printf("second day has the minimum temperature\n");
        }
        else
        {
            printf("Third day has the minimum temprature\n");
        }
    }
}
