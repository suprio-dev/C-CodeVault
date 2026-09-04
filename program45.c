#include <stdio.h>
int main()
{
int avg_marks,income;
printf("Enter average marks : ");
scanf("%d",&avg_marks);
printf("Enter family income : ");
scanf("%d",&income);
if(avg_marks>=75 && income <=200000)
printf("Scholarship Granted !");
else 
printf("Scholarship not Granted !");
return 0;
}