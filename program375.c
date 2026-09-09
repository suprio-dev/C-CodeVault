#include <stdio.h>

int addCal(int num1, int num2);

int main()
{
  int num1, num2;
  printf("Enter number 1 : ");
  scanf("%d", &num1);
  printf("Enter number 2 : ");
  scanf("%d", &num2);
  printf("Addition of 2 numbers is : %d\n", addCal(num1, num2));
  return 0;
}

int addCal(int num1, int num2)
{
  return num1 + num2;
}