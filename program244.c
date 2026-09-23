#include <stdio.h>
int main()
{
  int rows, cols, count = 0;
  printf("\nEnter rows : ");
  scanf("%d", &rows);
  printf("\nEnter columns : ");
  scanf("%d", &cols);
  int arr[rows][cols];
  printf("\nEnter matrix elements : ");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      scanf("%d", &arr[i][j]);
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] == 0)
        count++;
    }
  }
  printf("\nThe number of zero elements : %d", count);
  return 0;
}