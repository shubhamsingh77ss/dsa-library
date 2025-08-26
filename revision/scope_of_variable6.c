//wap to show the overriding of the global variable on the local variable
#include<stdio.h>
int n=10;
int main()
{
    int n=90;
    printf("%d\n",n);
    {
        extern int n;
        printf("%d\n",n);
    }
}
