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
  if(sum%2!=0)
printf("%d\n",i);
sum=0;

}

return 0;
}