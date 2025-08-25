//WAP that reads three vaalues and passes them it to fucntion that cal and return their sum
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    int sumfnc(int ,int ,int );
    printf("enter the vallues to be get added=\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=sumfnc(a,b,c);
    printf("Sum=%d",sum);
}
int sumfnc(int a1,int b1,int c1)
{
    int tot;
    tot=a1+b1+c1;
    return tot;
}
