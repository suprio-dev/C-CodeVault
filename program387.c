#include <stdio.h>

void swap(int a, int b);

int main()
{
  int a, b;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  swap(a, b);
  return 0;
}

void swap(int a, int b)
{
  int c = a;
  a = b;
  b = c;
  printf("a : %d\n", a);
  printf("b : %d\n", b);
}