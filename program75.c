#include <stdio.h>
int main()
{
int num,digit,new_num=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{

digit=num%10;
new_num=new_num*10+digit;
num/=10;

}
printf("Reversed number : %d\n",new_num);
return 0;

}