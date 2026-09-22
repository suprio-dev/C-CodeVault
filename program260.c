#include <stdio.h>
int main()
{
  int n, maindiagonal = 0, nondiagonal = 0;
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
      if (matrix[i][j] == 1 && i == j)
        maindiagonal++;
      if (matrix[i][j] == 0 && i != j)
        nondiagonal++;
    }
  }
  if (maindiagonal == n && nondiagonal == (n * n) - n)
    printf("\nIdentity Matrix !");
  else
    printf("\nNot an identity matrix !");
  return 0;
}
