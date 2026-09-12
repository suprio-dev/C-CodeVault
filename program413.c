#include <stdio.h>

void shift(int *ptr_x, int *ptr_y, int *ptr_z);

int main()
{
  int x, y, z;
  printf("Enter x : ");
  scanf("%d", &x);
  printf("Enter y : ");
  scanf("%d", &y);
  printf("Enter z : ");
  scanf("%d", &z);
  printf("\nBefore Circular Shift : \n");

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n\n", z);
  printf("After Circular Shift : \n");

  shift(&x, &y, &z);

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n\n", z);
  return 0;
}

void shift(int *ptr_x, int *ptr_y, int *ptr_z)
{
  int t = *ptr_z;
  *ptr_z = *ptr_y;
  *ptr_y = *ptr_x;
  *ptr_x = t;
}
