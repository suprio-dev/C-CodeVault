#include <stdio.h>
int main()
{
int num,n,sum=0,digit;
printf("Enter a number : ");
scanf("%d",&num);
n=num;
while(num!=0)
{
digit=num%10;
sum+=digit;
num/=10;
}
printf("The sum of the digits of %d is : %d",n,sum);
return 0;
}