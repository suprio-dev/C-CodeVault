#include <stdio.h>
int main()
{
  int num,digit,c=0,k=0;
  printf("Enter a number : ");
  scanf("%d",&num);
while(num!=0)
{
  digit=num%10;
  for(int i=1;i<=digit;i++){
    if(digit%i==0)
c++;

  }
  if(c==2)
  k++;
  c=0;
  num/=10;
}
if(k>2)
printf("Prime-Rich Number !");
else
printf("Not Prime-Rich Number !");
}