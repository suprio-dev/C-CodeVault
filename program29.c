#include <stdio.h>
#include <math.h>
int main()
{
 int num1,num2,num3,num4,min;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
printf("Enter number 3:");
scanf("%d",&num3);
printf("Enter number 4:");
scanf("%d",&num4);
min=(num1-num2+abs(num1+num2))/2;
min=(min-num3+abs(min+num3))/2;
min=(min-num4+abs(min+num4))/2;
printf("Smallest number : %d",min);
return 0;
}
