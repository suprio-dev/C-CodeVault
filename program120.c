#include <stdio.h>
#include <math.h>
int main()
{
int num,n,digit,new_num=0;
printf("Enter a number : ");
scanf("%d",&num);
n=num;
while(num!=0)
{

digit=num%10;
new_num=new_num*10+digit;
num/=10;

}
if(abs(n-new_num)%9==0)
printf("Magic Number !");
else
printf("Not a Magic Number !");
return 0;

}