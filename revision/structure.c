//wap that creates a student structure reads its member viz.reads marks in 3 subjects .calculate and displau percentage of marks
#include<stdio.h>
#include<stdio.h>
int main()
{
    struct students
    {
        unsigned long reg_no;
        float mk1,mk2,mk3;
    };
    struct students svar;
    float pc;
    printf("Enter thereg no and  marks obtained in the 3 subjects\n");
    scanf("%lu%f%f%f",&svar.reg_no,&svar.mk1,&svar.mk2,&svar.mk3);
    pc=(svar.mk1+svar.mk2+svar.mk3)/300*100;
    printf("percentage=%.2f",pc);
}
