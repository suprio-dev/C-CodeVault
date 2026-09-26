#include <stdio.h>

void addMatrix(int order, int arr1[order][order], int arr2[order][order], int arrSum[order][order]);
int leftSum = 0, rightSum = 0, k = 2;
int main()
{
  int order;
  printf("\nEnter order : ");
  scanf("%d", &order);
  int arrSum[order][order];
  int arr1[order][order];
  printf("\nEnter matrix1 elements : \n");
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
    printf("\n");
  }
  int arr2[order][order];
  printf("\nEnter matrix2 elements : \n");
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
    printf("\n");
  }

  addMatrix(order, arr1, arr2, arrSum);

  return 0;
}

void addMatrix(int order, int arr1[order][order], int arr2[order][order], int arrSum[order][order])
{
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
      arrSum[i][j] = arr1[i][j] + arr2[i][j];
  }
  printf("\nMatrix Addition : \n");
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
    {
      printf("%d  ", arrSum[i][j]);
    }
    printf("\n");
  }
}