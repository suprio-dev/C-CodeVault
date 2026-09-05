#include <stdio.h>
#include <math.h>
int main()
{
int num,quotient,remainder,binary=0,c=0;
printf("Enter a decimal number : ");
scanf("%d",&num);
while(num!=0)
{
  quotient=num/2;
  remainder=num%2;
binary=binary+(int)pow(10,c)*remainder;
num=quotient;
c++;

}

printf("Binary form : %d\n",binary);
return 0;

}