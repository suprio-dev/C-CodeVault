#include <stdio.h>
int main()
{
int p,t;
printf("Enter pressure : ");
scanf("%d",&p);
printf("Enter temperature : ");
scanf("%d",&t);
if(t<200)
{

if(p>100)
printf("Safe !");
else if(p>=50 && p<=100)
printf("Warning !");
else 
printf("Critical !");

}
else 
{

if(p>80)
printf("Danger !");
else
printf("Not danger !\n Safe !");

}

return 0;

}