#include <stdio.h>
int main()
{
  int k=1;
for(int i=1;i<=3;i++)
{
for(int j=1;j<=5;j++)
{
if(j>=3-i+1 && j<=3+i-1)
{
  printf("%d",k++);
}
else
{
  printf(" ");
}


}

printf("\n");

}


return 0;


}

