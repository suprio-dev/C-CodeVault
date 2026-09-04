#include <stdio.h>
#include <math.h>
int main()
{
 int num1,num2,num3,num4,max;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
printf("Enter number 3:");
scanf("%d",&num3);
printf("Enter number 4:");
scanf("%d",&num4);
max=(num1+num2+abs(num1-num2))/2;
max=(max+num3+abs(max-num3))/2;
max=(max+num4+abs(max-num4))/2;
printf("Largest number : %d",max);
return 0;
}
