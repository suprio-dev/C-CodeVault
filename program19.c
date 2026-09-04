#include <stdio.h>
int main()
{
 int num,n;
printf("Enter number :");
scanf("%d",&num);
n=num;
num/=100;
printf("New number after deleting the last two digits of %d is : %d\n",n,num);
return 0;
}