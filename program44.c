#include <stdio.h>
int main()
{
int monthly_income,emi;
printf("Enter monthly income : ");
scanf("%d",&monthly_income);
printf("Enter EMI : ");
scanf("%d",&emi);
if(monthly_income/emi>=3)
printf("Loan Approved !\n");
else 
printf("Loan Rejected !\n");
return 0;
}