//wap that reads a number and pases it to a function , the called function checkes whether the number is divisble by 6 or not 
//note thet "divisible by 6 or not divisble by 6 should be displayed in calling function not called function
#include<stdio.h>
int main()
{
    int num;
    char ch;
    char divby6(int);
    printf("Enter the number\n");
    scanf("%d",&num);
    ch=divby6(num);
    if(ch=='y')
    {
        printf("divisible by 6");
    }
    else
    {
        printf("Not divisible by 6");
    }
}
char divby6(int val)
{
    if(val%6==0)
    return 'y';
    else
    return 'n';
}
