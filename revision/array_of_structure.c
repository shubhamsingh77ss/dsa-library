//Write a program to demonstarte array of sturcture
#include<stdio.h>
int main()
{
    struct laptops
    {
        int RAM;
        int HDD_SPACE;
        float PRICE;
    };
    struct laptops sr[3];
    int n;
    for(n=0;n<3;n++)
    {
        printf("Enter RAM,HARD DISk SPACE and PRICE\n");
        scanf("%d %d %f",&sr[n].RAM,&sr[n].HDD_SPACE,&sr[n].PRICE);
    }
    for(n=0;n<3;n++)
    {
        printf("RAM=%d\tHDD SPACE=%d\tPRICE=%f\n",sr[n].RAM,sr[n].HDD_SPACE,sr[n].PRICE);
    }
}
