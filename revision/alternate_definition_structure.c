//write a program to show the alternate method of declaration of structures;
#include<stdio.h>
int main()
{
    struct students
    {
        unsigned long reg_no;
        float mk1,mk2,mk3;
    }svar;
    float pc;
    printf("Enter the registration number and marks of the three subject\n");
    scanf("%lu%f%f%f",&svar.reg_no,&svar.mk1,&svar.mk2,&svar.mk3);
    pc=(svar.mk1+svar.mk2+svar.mk3)/300*100;
    printf("%.2f",pc);
}
