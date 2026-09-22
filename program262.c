#include <stdio.h>
int main()
{
  int n, count = 0, k;
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
  printf("\nEnter value K to be searched : ");
  scanf("%d", &k);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matrix[i][j] == k)
        count++;
    }
  }
  if (count > 0)
    printf("\nValue present in matrix !");
  else
    printf("\nValue absent in matrix !");
  return 0;
}
