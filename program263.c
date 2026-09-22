#include <stdio.h>
int main()
{
  int n, sum = 0, k, max_sum = 0;
  printf("Enter order n : ");
  scanf("%d", &n);
  int matrix[n][n];
  printf("\nEnter matrix : \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      scanf("%d", &matrix[i][j]);
    printf("\n");
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      sum += matrix[i][j];
    }
    if (max_sum > sum)
      max_sum = sum;
  }
  sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      sum += matrix[i][j];
    }
    if (sum == max_sum)
    {
      printf("\nThe row with the maximum sum is : %d", i);
      break;
    }
  }
  return 0;
}
