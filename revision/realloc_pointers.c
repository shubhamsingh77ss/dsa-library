//program to showcase the working of realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *values;
    values=(int *)malloc(sizeof(int)*3);
    int c;
    for(c=0;c<3;c++)
    {
        printf("Values[%d]=",c);
        scanf("%d",&values[c]);
        
    }
    values=(int *)realloc(values,sizeof(int)*5);
    printf("\n__________________\n");
    for(c=3;c<5;c++)
    {
        printf("Values[%d]=",c);
        scanf("%d",&values[c]);
    }
    printf("\n__________________\n");
    
    for(c=0;c<5;c++)
    {
        printf("%d\t",*(values+c));//values[c]
    }
}
