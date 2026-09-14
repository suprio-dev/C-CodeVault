#include <stdio.h>
int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ",i);
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int min = arr[0];
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }
  printf("Maximum of all array elements : %d\n", max);
  printf("Minimum of all array elements : %d\n", min);
  return 0;
}