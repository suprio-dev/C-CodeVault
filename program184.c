#include <stdio.h>
int main()
{
  int arr[5], sum = 0, c = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth integer of the array : ", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 1; j <= arr[i]; j++)
    {
      if (arr[i] % j == 0)
        c++;
    }
    if (c == 2)
      printf("%d\t", arr[i]);
    c = 0;
  }
  return 0;
}