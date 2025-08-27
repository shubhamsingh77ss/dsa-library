//write a program to showcase using a structure to a function
#include<stdio.h>
struct employees
{
    unsigned int emp_code;
    int basic_sal;
    float hra,pf,bonus;
};
int main()
{
    struct employees evar;
    float get_netsalary(struct employees);//function prototype
    float net_sal;
    printf("Enter the employees code, basic salary, hra, pf and bonus\n");
    scanf("%u%d%f%f%f",&evar.emp_code,&evar.basic_sal,&evar.hra,&evar.pf,&evar.bonus);
    net_sal=get_netsalary(evar);//calling function
    printf("Net Salary=%8.2f",net_sal);
}
float get_netsalary(struct employees fvar)
{
    float net_sal;
    net_sal=fvar.basic_sal+fvar.hra+fvar.bonus-fvar.pf;
    return net_sal;
}
