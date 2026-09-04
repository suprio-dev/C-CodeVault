#include <stdio.h>
int main()
{
int num,n,product=1,digit;
printf("Enter a number : ");
scanf("%d",&num);
n=num;
while(num!=0)
{
digit=num%10;
product*=digit;
num/=10;
}
printf("The sum of the digits of %d is : %d",n,product);
return 0;
}