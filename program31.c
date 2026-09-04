#include<stdio.h>
int main()
{
float basic_salary,hra,da;
printf("Enter basic salary : Rs");
scanf("%f",&basic_salary);
hra=0.2*basic_salary;
da=0.1*basic_salary;
printf("Gross Salary : Rs%.2f\n",basic_salary+hra+da);
return 0;
}
