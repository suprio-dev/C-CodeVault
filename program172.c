#include <stdio.h>
int main()
{
int num,digit,factorial=1,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{
  digit=num%10;
  for(int i=digit;i>=1;i--){
factorial*=i;
  }
sum+=factorial;
factorial=1;
num/=10;
}

if(sum%10==0)
printf("Factorial-Lucky Number !");
else 
printf("Not a Factorial-Luck number !");
return 0;

}