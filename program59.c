#include <stdio.h>
int main()
{
int i,N;
printf("Enter a number : ");
scanf("%d",&N);
for(i=1;i<=N;i++)
printf("%d\n",i*i*i);
return 0;
}