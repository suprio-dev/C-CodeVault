#include <stdio.h>
int main()
{
int a,b,num1,num2,rem;
printf("Enter two numbers(a>b)\n");
printf("Enter a : ");
scanf("%d",&a);
num1=a;
printf("Enter b : ");
scanf("%d",&b);
num2=b;
while(1)
{
rem=a%b;
if(rem==0)
{
  printf("LCM of two numbers is : %d\n",num1*num2/b);
  break;
}
else{
  a=b;
  b=rem;

}

}
return 0;
}