#include <stdio.h>
#include <math.h>
int main()
{
int num,quotient,remainder,binary=0,c=0,k=0,sum=0,octal=0;
printf("Enter a binary number : ");
scanf("%d",&num);

while(num!=0)
{
  int digit=num%10;
  sum+=digit*(int)pow(2,k);
  k++;
  num/=10;

}

while(sum!=0)
{
  quotient=sum/8;
  remainder=sum%8;
octal=octal+(int)pow(10,c)*remainder;
sum=quotient;
c++;

}
printf("Octal form : %d\n",octal);
return 0;

}
