
#include <stdio.h>
int main()
{
int num,digit,sum=0,c=0,prime_count=0;
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
prime_count++;
num/=10;
c=0;

}
printf("Total number of prime digits : %d\n",prime_count);
return 0;

}