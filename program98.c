#include <stdio.h>
int main()
{
int a,b,rem;
printf("Enter two numbers(a>b)\n");
printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);
while(1)
{
rem=a%b;
if(rem==0)
{
  printf("HCF of two numbers is : %d\n",b);
  break;
}
else{
  a=b;
  b=rem;

}

}
return 0;
}