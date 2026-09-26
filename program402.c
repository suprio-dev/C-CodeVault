#include <stdio.h>

void sparseCheck(int rows, int columns, int arr[rows][columns]);
int count_zero = 0, count_non_zero = 0;
int main()
{
  int rows, columns;
  printf("Enter rows : ");
  scanf("%d", &rows);
  printf("\nEnter columns : ");
  scanf("%d", &columns);
  int arr[rows][columns];
  printf("\nEnter matrix elements : \n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  sparseCheck(rows, columns, arr);
  if (count_zero > count_non_zero)
    printf("Sparse Matrix !");
  else
    printf("Dense Matrix !");
  return 0;
}

void sparseCheck(int rows, int columns, int arr[rows][columns])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      if (arr[i][j] == 0)
        count_zero++;
      else
        count_non_zero++;
    }
  }
}