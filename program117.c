#include <stdio.h>
#include <math.h>
int main()
{
  int num,c=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  while(num!=0)
  {
    int digit=num%10;
if(digit==0)
c++;
num/=10;

  }
if(c>0)
printf("Duck Number !");
else
printf("Not a Duck Number !");
return 0;
}