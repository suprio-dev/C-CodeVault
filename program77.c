#include <stdio.h>
#include <math.h>
int main()
{
int num,n,new_num=0,digit;
printf("Enter a number : ");
scanf("%d",&num);
n=num;
while(num!=0)
{
digit=num%10;
new_num+=pow(digit,3);
num/=10;
}
if(n==new_num)
printf("Armstrong Number !");
else 
printf("Not a Armstrong Number !");
return 0;
}