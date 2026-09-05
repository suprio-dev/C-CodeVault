#include <stdio.h>
int main()
{
  int num,digit,sum=0;
  printf("Enter a number : ");
  scanf("%d",&num);
while(num!=0)
{
  digit=num%10;
  sum+=0;
  num/=10;


}
if(sum%4==0)
printf("Lucky Number !");
else
printf("Unlucky Number !");
return 0;
}