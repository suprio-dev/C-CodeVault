#include <stdio.h>
int main()
{
  int age=19;
  int *ptr=&age;
  printf("Age : %d\n",*ptr);
  return 0;
}