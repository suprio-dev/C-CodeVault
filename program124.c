#include <stdio.h>
#include <math.h>
int main()
{
int num,quotient,remainder,octal=0,c=0;
printf("Enter a decimal number : ");
scanf("%d",&num);
while(num!=0)
{
  quotient=num/8;
  remainder=num%8;
octal=octal+(int)pow(10,c)*remainder;
num=quotient;
c++;

}

printf("Octal form : %d\n",octal);
return 0;

}