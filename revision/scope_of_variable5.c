//wap to show that the local variable is always given the priority not the global
#include<stdio.h>
int n=10;
int main()
{
    int n=90;
    printf("%d\n",n);
}
