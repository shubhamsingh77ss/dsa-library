//write a program to get the reverse of a number
#include<stdio.h>
int main()
{
    void getreverse(int);
    int num;
    printf("Enter the number=");
    scanf("%d",&num);
    getreverse(num);
}
void getreverse(int num1)
{
    int r;
    while(num1!=0)
    {
        r=num1%10;
        printf("%d",r);
        num1=num1/10;
    }
}
