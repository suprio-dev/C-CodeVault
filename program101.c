#include <stdio.h>
#include <math.h>
int main()
{
int num,n,digit,k,c=0,sum=0;
printf("Enter a number : ");
scanf("%d",&num);

for(int i=1;i<=num;i++){
  n=i;
 k=i;
while(k!=0)
{
digit=k%10;
c++;
k/=10;

}
while(n!=0)
{
digit=n%10;
sum+=pow(digit,c);
n/=10;

}

if(sum==i)
printf("%d\n",i);
c=0;
sum=0;

}

return 0;

}