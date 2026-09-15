#include <stdio.h>
int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ", i);
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
  int t = max;
  max = min;
  min = t;
  printf("Interchanged largest value : %d\n", max);
  printf("Interchanged smallest value : %d\n", min);
  return 0;
}