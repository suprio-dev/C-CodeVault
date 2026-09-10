
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
  if (*ptr1 < *ptr2)
    printf("Minimum number is : %d\n", *ptr1);
  else
    printf("Minimum number is : %d\n", *ptr2);
  return 0;
}
