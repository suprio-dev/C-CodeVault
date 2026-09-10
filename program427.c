#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter number 1 : ");
  scanf("%d", &num1);
  printf("Enter number 2 : ");
  scanf("%d", &num2);
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  int t = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = t;
  printf("num1 : %d\n", num1);
  printf("num2 : %d\n", num2);
  return 0;
}