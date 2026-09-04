#include <stdio.h>
int main()
{
 int num,two_digit,q,reverse=0,digit;
printf("Enter number :");
scanf("%d",&num);
two_digit=num%100;

q=num/100;

while(two_digit!=0)
{
digit=two_digit%10;
reverse=reverse*10+digit;
two_digit/=10;

}
printf("After reversing the last two digits of %d we get : %d",num,100*q+reverse);
return 0;
}