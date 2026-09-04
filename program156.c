#include <stdio.h>
int main()
{
for(int i=5;i>=1;i--)
{
for(int j=1;j<=9;j++)
{
  if(j>=5-i+1 && j<=5+i-1)
  printf("*");
  else
  printf(" ");

}
printf("\n");

}

return 0;

}