#include <stdio.h>
int main()
{
int num,n,digit,c=0;
printf("Enter a number : ");
scanf("%d",&num);
n=num;
while(num!=0)
{

digit=num%10;
c++;
num/=10;

}

printf("The number of digits in %d is : %d",n,c);
return 0;
}