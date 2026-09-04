#include <stdio.h>
#include<math.h>
int main()
{
int num,digit,c=0,n;
printf("Enter a number :");
scanf("%d",&num);
n=num;
int last_digit=num%10;
while(num!=0)
{
digit=num%10;
c++;
num/=10;

}
int first_digit=n/pow(10,c-1);
printf("Sum of first digit and last digit is : %d",last_digit+first_digit);
return 0;
}