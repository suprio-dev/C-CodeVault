#include <stdio.h>
#include <math.h>
int main()
{
  int num1,num2,num3,max;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
printf("Enter number 3:");
scanf("%d",&num3);
max=(num1+num2+abs(num1-num2))/2;
printf("Greatest no.:%d\n",(max+num3+abs(max-num3))/2);
return 0;
}