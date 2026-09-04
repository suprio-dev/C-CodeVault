#include <stdio.h>
int main()
{
int num,q,r;
printf("Enter a number : ");
scanf("%d",&num);
q=num/2;
r=num-2*q;
switch(r)
{
case 1:
printf("Odd Number !");
break;
case 0:
printf("Even Number !");


}

return 0;

}