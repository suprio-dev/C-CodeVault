#include <stdio.h>
#include <math.h>
int main()
{
int num,quotient,remainder,binary=0,c=0,k=0,sum=0;
printf("Enter a octal number : ");
scanf("%d",&num);

while(num!=0)
{
  int digit=num%10;
  sum+=digit*(int)pow(8,k);
  k++;
  num/=10;

}

while(sum!=0)
{
  quotient=sum/2;
  remainder=sum%2;
binary=binary+(int)pow(10,c)*remainder;
sum=quotient;
c++;

}

printf("Binary form : %d\n",binary);
return 0;

}







