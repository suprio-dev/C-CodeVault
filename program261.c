#include <stdio.h>
int main()
{
  int n, left_sum = 0, right_sum = 0;
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
  printf("\nThe matrix : \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      printf("%d  ", matrix[i][j]);
    printf("\n");
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        left_sum += matrix[i][j];
    }
  }
  int k = n - 1;
  for (int i = 0; i < n; i++)
  {
    right_sum += matrix[i][k];
    k--;
  }
  printf("\nLeft diagonal sum is : %d", left_sum);
  printf("\nRight diagonal sum is : %d", right_sum);
  printf("\nTotal diagonal sum is : %d", left_sum + right_sum);
  return 0;
}
