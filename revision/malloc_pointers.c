//sample program using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr1,n,k;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    arr1=(int *)malloc(sizeof(int)*n);
    for(k=0;k<n;k++)
    {
        printf("arr1[%d]=",k);
        scanf("%d",(arr1+k));//scanf("%d",&arr1[k]);
    }
    printf("output\n");
    for(k=0;k<n;k++)
    {
        printf("arr1[%d]=%d\n",k,*(arr1+k));
    }
}
