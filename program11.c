#include <stdio.h>
#include <math.h>
int main()
{
  int num1,num2;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
printf("Greater no.:%d\n",(num1+num2+abs(num1-num2))/2);
return 0;
}