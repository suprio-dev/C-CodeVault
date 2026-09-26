#include <stdio.h>
#include <math.h>
void normCal(int rows, int columns, int arr[rows][columns]);
int sum = 0;
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
  normCal(rows, columns, arr);
  printf("The norm of the matrix is : %.1f\n", sqrt(sum));
  return 0;
}

void normCal(int rows, int columns, int arr[rows][columns])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
      sum += arr[i][j] * arr[i][j];
  }
}