#include <stdio.h>
int main()
{
float cap,dis,total_water;
printf("Enter canteen capacity(in liters) : ");
scanf("%f",&cap);
printf("Enter total distance of the trek(in km) : ");
scanf("%f",&dis);
total_water=dis*250/1000;
if(cap>=total_water)
printf("Yes , he has enought water to finish the trek !");
else
printf("%.2f L of additional water he needs to carry !",total_water-cap);
return 0;
}