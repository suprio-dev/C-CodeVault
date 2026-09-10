
#include <stdio.h>
int main()
{
  int c = 5;
  int *ptr = &c;
  *ptr = ++(*ptr);
  printf("Pointer-increment : %d\n", *ptr);
  *ptr = 5;
  *ptr = --(*ptr);
  printf("Pointer-decrement : %d\n", *ptr);
  return 0;
}