#include <stdio.h>
int main()
{
  int year;
  printf("Enter Year : ");
  scanf("%d",&year);
  year%4==0?printf("Leap Year"):printf("Not a Leap Year");
return 0;
}