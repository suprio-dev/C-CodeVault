#include <stdio.h>
int main()
{
for(int i=7;i>=1;i-=2)
{
for(int j=1;j<=13;j++)
{
  if(j>=7-i+1 && j<=7+i-1)
  printf("*");
  else
  printf(" ");

}
printf("\n");

}

return 0;

}