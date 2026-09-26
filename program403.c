#include <stdio.h>

void diagonalSum(int order, int arr[order][order]);
int leftSum = 0, rightSum = 0, k = 2;
int main()
{
  int order;
  printf("\nEnter order : ");
  scanf("%d", &order);
  int arr[order][order];
  printf("\nEnter matrix elements : \n");
  for (int i = 0; i < order; i++)
  {
    for (int j = 0; j < order; j++)
    {
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  diagonalSum(order, arr);
  printf("The sum of diagonal elements : %d\n", leftSum + rightSum);
  return 0;
}

void diagonalSum(int order, int arr[order][order])
{
  for (int i = 0; i < order; i++)
  {

    leftSum += arr[i][i];
    rightSum += arr[i][k];
    k--;
  }
}