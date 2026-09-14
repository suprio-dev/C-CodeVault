#include <stdio.h>
int main()
{
  float arr[5],sum=0;
  for(int i=0;i<5;i++){
    printf("Enter %dth decimal number of the array : ",i);
   scanf("%f",&arr[i]); 
  }
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
  printf("Mean of all array elements : %.1f\n",sum/5.0);
  return 0;
}