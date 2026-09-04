#include <stdio.h>
int main()
{
int i,N;
printf("Enter a number : ");
scanf("%d",&N);
for(i=1;i<=N;i++){
if(i%5!=0){
continue;
}

printf("%d\n",i);
}
return 0;
}