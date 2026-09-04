#include <stdio.h>
int main()
{
int num,c=0,i,j;
printf("Enter a number : ");
scanf("%d",&num);
for(i=1;i<=num;i++){
for(j=1;j<=i;j++)
{
  if(i%j==0)
c++;
}
if(c==2)
printf("%d\n",i);
c=0;
}
return 0;
}