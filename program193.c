#include <stdio.h>
int main()
{
  int arr[5], c = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (arr[i] == arr[j])
        c++;
    }
    if (c > 1)
    {
      printf("\nThe array has duplicate numbers !");
      break;
    }
    c = 0;
  }
  return 0;
}