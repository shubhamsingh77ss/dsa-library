//write a program to ASCII table 
#include<stdio.h>
void display()
{
    int a=0;
    while(a<=255)
    {
        printf("[%d]=[%c]\n",a,a);
        a++;
    }
}
int main()
{
    printf("We are displaying the ASCII table\n");
    display();
}
