#include <stdio.h>
int main()
{
for(int i=6;i>=0;i-=2)
{
for(int j=1;j<=11;j++)
{
if(j>=6-i+2 && j<=6+i-2)
printf("  ");
else
printf("* ");
}
printf("\n");
}
return 0;

}