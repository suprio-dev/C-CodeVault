#include <stdio.h>
int main()
{
 
for(int i=1;i<=4;i++)
{
  int num=1;
for(int j=1;j<=7;j++)
{

if(j>=4-i+1 && j<=4+i-1)
{
  
printf("%d",num);
num++;


}
else
printf(" ");

}
printf("\n");

}

return 0;

}