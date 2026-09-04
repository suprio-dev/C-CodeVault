#include <stdio.h>
int main()
{
int num,c=0,n;
printf("Enter a number : ");
scanf("%d",&num);
n=num;
while(num!=0){
c++;
num/=10;
}
printf("The no. of digits in %d is : %d\n",n,c);
return 0;
}