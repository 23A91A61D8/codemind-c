#include<stdio.h>
int main()
{
    float salary,HRA,DA,PF,Grosssalary;
    scanf("%f%f%f",&salary,&HRA,&DA,&PF);
    PF=(12*salary/100);
    Grosssalary=salary+HRA+DA+PF;
    printf("%.2f
%.2f",PF,Grosssalary);
}