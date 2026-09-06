#include <stdio.h>
int main()
{
int num,check;
printf("Enter a number : ");
scanf("%d",&num);
check=num&1;
switch(check)
{
case 1:
printf("Odd Number !");
break;
case 0:
printf("Even Number !");


}

return 0;

}