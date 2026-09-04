#include <stdio.h>
int main()
{
int l,u;
printf("Enter lower limit : ");
scanf("%d",&l);
printf("Enter upper limit : ");
scanf("%d",&u);
for(int i=l;i<=u;i++)
printf("%d\n",i);
return 0;
}