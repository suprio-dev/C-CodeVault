#include <stdio.h>
int main()
{
int n;
printf("Enter number :");
scanf("%d",&n);
if(n%2!=0)
printf("weird");
else 
{
if(n>=2 && n<=5)
printf("not weird");
else if(n>=6 && n<=20)
printf("weird");
else
printf("not weird");
}
return 0;
}