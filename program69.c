#include <stdio.h>
int main()
{
int i,sum=0,N;
printf("Enter a number : ");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
if(i%2!=0)
sum+=i;
}
printf("Sum of odd numbers : %d\n",sum);
return 0;
}