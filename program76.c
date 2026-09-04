#include <stdio.h>
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
if(n==new_num)
printf("Palindrome Number !");
else
printf("Not a Palindrome Number !");
return 0;

}