#include <stdio.h>
int main()
{
int num,original_num,digit,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
  original_num=i;
  while(original_num!=0)
  {
digit=original_num%10;
sum+=digit;
original_num/=10;
  }
printf("the sum of the digits of %d is : %d\n",i,sum);
sum=0;

}

return 0;
}