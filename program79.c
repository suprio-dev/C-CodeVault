#include <stdio.h>
int main()
{
int num,c=0;
printf("Enter a number : ");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
  if(num%i==0)
c++;
}
if(c==2)
printf("Prime Number !");
else 
printf("Not a Prime NUmber !");
return 0;
}