

#include <stdio.h>
int main()
{
   int k = 7;
  for (int i = 1; i <= 3; i++)
  {
    for (int j=1;j<=k;j++)
    {
printf("%d ",j);

    }
    printf("\n");
    k-=2;

  }
for(int i=2;i>=1;i--){

for(int j=1;j<=i;j++)
{

printf("%d ",j);

}
 printf("\n");
}
return 0;
}



