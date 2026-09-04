#include <stdio.h>
#include <math.h>
int main()
{
int num,digit,c=0,new_num=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num!=0)
{
  digit=num%10;
  if(digit%3==0){
    num/=10;
    continue;
  }
  else{
new_num+=digit*(int)pow(10,c);
c++;
num/=10;
  }
}
printf("%d",new_num);
return 0;


}