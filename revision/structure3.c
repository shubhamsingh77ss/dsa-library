//write a program to shwocase for the structure
#include<stdio.h>
struct IELTS
{
    char reg_no[15];
    float bnd1,bnd2,bnd3;
};
int main()
{
    struct IELTS ivar;
    float score_avg(struct IELTS);//function prototype
    float band_avg;
    fgets(ivar.reg_no, sizeof(ivar.reg_no), stdin);
    scanf("%f%f%f",&ivar.bnd1,&ivar.bnd2,&ivar.bnd3);
    band_avg=score_avg(ivar);
    printf("Average of bands scared=%.2f",band_avg);
}
float score_avg(struct IELTS dvar)
{
    float avg=(dvar.bnd1+dvar.bnd2+dvar.bnd3)/3;
    return avg;
}
