#include <stdio.h>
int main()
{
  int n;
  printf("Enter order n (1 or 2 or 3) : \n");
  scanf("%d", &n);
  int arr[n][n];
  printf("\nEnter matrix elements : \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      scanf("%d", &arr[i][j]);
    printf("\n");
  }
  if (n == 1)
    printf("Determinant of matrix : %d", arr[0][0]);
  if (n == 2)
    printf("Determinant of matrix : %d", arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);
  if (n == 3)
  {
    int determinant =
        arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    printf("Determinant of matrix : %d", determinant);
  }
  return 0;
}