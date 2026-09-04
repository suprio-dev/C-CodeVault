#include <stdio.h>
int main()
{
int num,digit,last_digit,c=0;
printf("Enter a number : ");
scanf("%d",&num);
printf("Enter a digit : ");
scanf("%d",&digit);
while(num!=0)
{

last_digit=num%10;
if(last_digit==digit)
c++;
num/=10;

}

if(c>0)
printf("Frquency of the digit in the number is : %d",c);
else
printf("No such digit is present in the number !");

return 0;

}