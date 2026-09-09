#include <stdio.h>

int minCal(int num1, int num2, int num3);

int main()
{
  int num1, num2, num3;
  printf("Enter number 1 : ");
  scanf("%d", &num1);
  printf("Enter number 2 : ");
  scanf("%d", &num2);
  printf("Enter number 3 : ");
  scanf("%d", &num3);
  printf("Minimum of 3 numbers is : %d\n", minCal(num1, num2, num3));
  return 0;
}

int minCal(int num1, int num2, int num3)
{
  if(num1<num2 && num1<num3)
  return num1;
  else if(num2<num1 && num2<num3)
  return num2;
 else
  return num3;
}