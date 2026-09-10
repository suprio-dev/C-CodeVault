#include <stdio.h>
int main()
{
  int age=19;
  int *ptr=&age;
  printf("%p\n",ptr);
  printf("%u\n",ptr);
  return 0;
}