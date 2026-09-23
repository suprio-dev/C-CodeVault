#include <stdio.h>
int main()
{
  int n;
  printf("Enter order of matrix : ");
  scanf("%d", &n);
  int arr[n][n];
  printf("\nEnter the matrix elements : \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)

      scanf("%d", &arr[i][j]);
    printf("\n");
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i > j)
        arr[i][j] = 0;
    }
    printf("\n");
  }
  printf("\nUpper triangular matrix : \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)

      printf("%d  ",arr[i][j]);
    printf("\n");
  }
  return 0;
}