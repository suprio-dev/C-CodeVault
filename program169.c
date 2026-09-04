#include <stdio.h>
#include <math.h>
int main()
{
int num,digit,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
sum+=(int)pow(digit,2);
num/=10;


}

if(sqrt(sum)==floor(sqrt(sum)))
printf("Square-Happy Number !");
else
printf("Not a Square-Happy Number !");
return 0;

}