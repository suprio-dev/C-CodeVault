#include <stdio.h>
int main()
{
  int n;
  printf("Enter order of matrix : ");
  scanf("%d", &n);
  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {

      if (i == j)
        arr[i][j] = 0;
      if (j > i)
        arr[i][j] = 1;
      if (j < i)
        arr[i][j] = -1;
    }
    printf("\n");
  }

  printf("\nThe matrix : \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)

      printf("%d\t", arr[i][j]);
    printf("\n");
  }
  return 0;
}