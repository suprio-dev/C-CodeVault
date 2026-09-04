#include <stdio.h>
int main()
{

int num,sum=0;
printf("Enter number : ");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
for(int j=1;j<i;j++)
{
  
if(i%j==0)
sum+=j;

}

if(sum==i)
printf("%d\n",i);
sum=0;

}

return 0;

}