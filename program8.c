#include <stdio.h>
int main()
{
  float celsius;
  printf("Enter temperature in Celsius scale:");
  scanf("%f",&celsius);
  printf("Temperature in Fahrenheit:%f\n",9*celsius/5+32);
return 0;
}