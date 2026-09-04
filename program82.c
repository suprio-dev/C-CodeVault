

#include <stdio.h>
int main()
{
int num,digit,sum=0,c=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
for(int i=1;i<=digit;i++)
{
if(digit%i==0)
c++;


}
if(c==2)
sum+=digit;
num/=10;
c=0;

}
printf("Sum of prime digits : %d\n",sum);
return 0;

}