#include <stdio.h>
int main()
{
  int arr[2][2][2];
  printf("Enter array elements : ");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
        scanf("%d", &arr[i][j][k]);
      printf("\n");
    }
  }
  for (int i = 0; i < 2; i++)
  {
    printf("Layer %d :\n", i + 1);
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
        printf("%d  ", arr[i][j][k]);
      printf("\n");
    }
  }
  return 0;
}