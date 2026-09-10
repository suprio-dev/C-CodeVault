
#include <stdio.h>
int main()
{

  int num = 19;
  void *ptr; // void pointer
  ptr = &num;
  printf("%d\n", *(int *)ptr);
  return 0;
}