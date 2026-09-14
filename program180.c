#include <stdio.h>
int main()
{
  int list[5];
  for(int i=0;i<5;i++){
    printf("Enter %dth integer from the list : ",i);
   scanf("%d",&list[i]); 
  }
for(int i=0;i<5;i++){
  printf("%dth array element : %d\n",i,list[i]);
}
return 0;
}