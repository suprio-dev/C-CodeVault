#include <stdio.h>
int main()
{
  int num1, num2,sum;
  printf("Enter number 1 : ");
  scanf("%d", &num1);
  printf("Enter number 2 : ");
  scanf("%d", &num2);
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  int *ptr_sum=&sum;
  *ptr_sum=*ptr1+*ptr2;
  printf("The sum of %d and %d is : %d\n",num1,num2,sum);
  return 0;
}