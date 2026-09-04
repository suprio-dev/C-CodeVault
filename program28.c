#include <stdio.h>
#include <math.h>
int main()
{
  int num1,num2,num3,max,min;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
printf("Enter number 3:");
scanf("%d",&num3);
max=(num1+num2+abs(num1-num2))/2;
max=(max+num3+abs(max-num3))/2;

min=(num1-num2+abs(num1+num2))/2;
min=(min-num3+abs(min+num3))/2;
if (num1>min && num1<max)
printf("Second Largest number is:%d\n",num1);
else if (num2>min && num2<max)
  printf("Second Largest number is:%d\n",num2);
  else
  printf("Second Largest number is:%d\n",num3);
  return 0;
}

