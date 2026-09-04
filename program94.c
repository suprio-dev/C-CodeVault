#include <stdio.h>
#include <math.h>
int main()
{
int num,digit,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
sum+=pow(digit,2);
num/=10;

}
printf("Sum of the squares of the digit of the number : %d",sum);
return 0;

}