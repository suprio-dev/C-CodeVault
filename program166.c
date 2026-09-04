#include <stdio.h>
int main()
{
int num,odd_sum=0,even_sum=0,digit;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{
  digit=num%10;
  if(digit%2==0)
  even_sum+=digit;
  else
  odd_sum+=digit;
  num/=10;
}

if(even_sum-odd_sum==0)
printf("Balanced Number !");
else
printf("Not a balanced number !");
return 0;

}