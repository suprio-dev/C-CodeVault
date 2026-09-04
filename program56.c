#include <stdio.h>
int main()
{
int i,N,sum=0;
printf("Enter a number : ");
scanf("%d",&N);
for(i=1;i<=N;i++){

sum+=i;

}
printf("%d\n",sum);
return 0;
}