#include <stdio.h>
int main()
{
  int arr[5],sum=0;
  for(int i=0;i<5;i++){
    printf("Enter %dth integer of the array : ",i);
   scanf("%d",&arr[i]); 
  }
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
  printf("Sum of all array elements : %d\n",sum);
  return 0;
}