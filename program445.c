
#include <stdio.h>
int main()
{
  int age=19;
  int *ptr=&age;
  int **pptr=&ptr;
  printf("%p",pptr);
  return 0;
}