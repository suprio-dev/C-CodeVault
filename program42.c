#include <stdio.h>
int main()
{
int rain;
printf("Enter rainfall  in mm : ");
scanf("%d",&rain);
if(rain==0)
printf("No Rain");
else if(rain>=1 && rain<=10)
printf("Light Rain");
else if(rain>10)
printf("Heavy Rain");
return 0;
}