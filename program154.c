#include <stdio.h>
int main()
{
for(int i=1;i<=5;i++)
{
  int k=1;
for(int j=1;j<=5;j++)
{
  if(j>=i && j<=5){
printf("%d",k++);
  }

else
printf(" ");

}
printf("\n");
}
return 0;
}