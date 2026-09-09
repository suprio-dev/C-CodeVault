#include <stdio.h>

int prime(int num);
int c=0;

int main(){
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  if(prime(num)==1)
  printf("Prime Number ! ");
  else if(prime(num)==0)
  printf("Composite Number ! ");
  return 0;

}

int prime(int num){

    for(int i=1;i<=num;i++){
      if(num%i==0)
      c++;
    }
    if(c==2)
    return 1;
    else
    return 0;

}