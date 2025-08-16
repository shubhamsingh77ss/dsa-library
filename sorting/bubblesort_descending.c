//#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter the values in the array\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)//outer loop is for the passes
    {
        for(j=0;j<(9-i);j++)//inner loop is for the comaprisons
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}
