#include <stdio.h>
#include <math.h>
int main()
{
int num,n,original_number,digit,c=0,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
n=original_number=num;
while(num!=0)
{
digit=num%10;
c++;
num/=10;

}
while(n!=0)
{
digit=n%10;
sum+=pow(digit,c);
n/=10;

}
if(sum==original_number)
printf("Armstrong Number !");
else
printf("Not an armstrong number !");
return 0;

}