#include <stdio.h>
int main()
{
int N,digit,factorial=1,sum=0,original_num;
printf("Enter a number : ");
scanf("%d",&N);
for(int i=1;i<=N;i++){
original_num=i;
while(original_num!=0)
{
  digit=original_num%10;
  for(int j=digit;j>=1;j--){
factorial*=j;
  }
sum+=factorial;
factorial=1;
original_num/=10;
}
if(sum==i)
printf("%d\n",i);
sum=0;

}

return 0;

}