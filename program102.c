#include <stdio.h>
int main()
{

int num,sum=0;
printf("Enter number : ");
scanf("%d",&num);
for(int i=1;i<num;i++)
{
  
if(num%i==0)
sum+=i;

}

if(sum==num)
printf("Perfect Number !");
else
printf("Not a Perfect Number !");
return 0;

}