#include <stdio.h>
int* squareCal(int *num);
int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);

  printf("Square is : %d\n", *squareCal(&num));
  return 0;
}

int* squareCal(int *num)
{
  *num = *num * *num;
  return num;
}