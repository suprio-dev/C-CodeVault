#include <stdio.h>
int main()
{
  int arr[5],c=0,k=0;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ", i);
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int second_max=0;
  
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  
  }
  for(int i=0;i<5;i++)
  {
    if(arr[i]!=max)
    {
      if(arr[i]>second_max)
      second_max=arr[i];
      k++;

    }
    else
    c++;
  }
  if(k>0)
   printf("\nSecond largest element is : %d\n",second_max);
  if(c==5)
  printf("\nSecond largest element is : %d\n",max);
  return 0;
}