#include <stdio.h>
int main()
{
int i,N;
printf("Enter a number : ");
scanf("%d",&N);
for(i=N;i>=0;i--)
{
if(i%2==0)
continue;
printf("%d\n",i);
}
return 0;
}