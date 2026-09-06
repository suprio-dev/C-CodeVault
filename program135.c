#include <stdio.h>
#include <math.h>
int main()
{
  int digit1,digit2,plus,carry=0,actualremainder,actualquotient,binaryadd=0;
  int num1,num2,binary1=0,binary2=0,c=0;
printf("Enter decimal number 1 : ");
scanf("%d",&num1);
printf("Enter decimal number 2 : ");
scanf("%d",&num2);
while(num1!=0)
{
 int quotient=num1/2;
  int remainder=num1%2;
binary1=binary1+(int)pow(10,c)*remainder;
num1=quotient;
c++;
  
 }
 c=0;
while(num2!=0)
{
  int quotient=num2/2;
  int remainder=num2%2;
binary2=binary2+(int)pow(10,c)*remainder;
num2=quotient;
c++;
  
 }
 c=0;
  while(binary1!=0 || binary2!=0)
  {
    digit1=binary1%10;
    digit2=binary2%10;
    plus=digit1+digit2+carry;
    actualremainder=plus%2;
    actualquotient=plus/2;
    binaryadd+=(int)pow(10,c)*actualremainder;
    carry=actualquotient;
    c++;
    binary1/=10;
    binary2/=10;

  }
if(carry!=0)
binaryadd+=(int)pow(10,c)*carry;
printf("Binary Addition : %d",binaryadd);
return 0;
}