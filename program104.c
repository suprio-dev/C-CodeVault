#include <stdio.h>
int main()
{
int num,digit,factorial=1,sum=0,original_num;
printf("Enter a number : ");
scanf("%d",&num);
original_num=num;
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

if(original_num==sum)
printf("Strong Number !");
else
printf("Not a Strong Number !");
return 0;

}