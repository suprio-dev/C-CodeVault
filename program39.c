#include <stdio.h>
int main()
{
int units;
printf("Enter units of electricity consumed : ");
scanf("%d",&units);
if(units <=100 && units > 0)
printf("Electricity Bill : Rs%d\n",units*2);
else if(units >=100 && units <=200)
printf("Electricity Bill : Rs%d\n",units*3);
else if(units > 200)
printf("Electricity Bill : Rs%d\n",units*5);
return 0;
}