#include <stdio.h>
int main()
{
int num,digit,reverse=0,original,ori_count=0,rev_count=0;
printf("Enter a number : ");
scanf("%d",&num);
original=num;
while(num!=0)
{
digit=num%10;
reverse=10*reverse+digit;
num/=10;

}

for(int i=1;i<=original;i++)
{
  if(original%i==0)
  ori_count++;
}

for(int i=1;i<=original;i++)
{
  if(reverse%i==0)
  rev_count++;
}

if(ori_count==rev_count)
printf("Same number of factors !");
else
printf("Not Same number of factros !");
return 0;

}