#include <stdio.h>
#include <math.h>
int main()
{
  int num,c=0,original_num;
  printf("Enter a number : ");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
original_num=i;
 while(original_num!=0)
  {
    int digit=original_num%10;
if(digit==0)
c++;
original_num/=10;

  }
if(c>0)
printf("%d\n",i);
c=0;

  }
 
return 0;
}