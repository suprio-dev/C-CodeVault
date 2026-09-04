#include <stdio.h>
int main()
{
int i,N;
printf("Enter a number : ");
scanf("%d",&N);
for(i=1;i<=10;i++){

printf("%d * %d = %d\n",N,i,N*i);

}

return 0;
}