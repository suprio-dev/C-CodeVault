#include <stdio.h>
int main()
{
  int N,even=0,whole=0;
  printf("Enter Nth tem : ");
  scanf("%d",&N);
  int i=1;
  while(1)
  {
    if(i%2!=0)
    {
if(i==N){
  printf("%d",even);
  break;
}
even+=2;
    }
else{
if(i==N){
  printf("%d",whole);
  break;
}
whole++;
}
 i++;
  }
  return 0;
}