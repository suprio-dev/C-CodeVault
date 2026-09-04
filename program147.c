

#include <stdio.h>
int main()
{
  int i, j, k = 9;
  for (i = 1; i <= 5; i++)
  {
    for (j=1;j<=k;j++)
    {
printf("* ");

    }
    printf("\n");
    k-=2;

  }
  return 0;
}