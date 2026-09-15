
#include <stdio.h>
int main()
{
  int c = 5, k = 4;
  int *ptr = &c;
  printf("Pointer: %u\n", ptr);
  ptr++;
  printf("Pointer-increment : %u\n", ptr);
  int *_ptr = &k;
  printf("Pointer: %u\n", _ptr);
  _ptr--;
  printf("Pointer-decrement : %u\n", _ptr);
  return 0;
}