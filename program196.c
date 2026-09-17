#include <stdio.h>
int main()
{
  int num, n, index;
  printf("\nEnter array length : ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter the array elements :\n ");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter number to be inserted : ");
  scanf("%d", &num);
  printf("\nEnter index of the inserted number : ");
  scanf("%d", &index);
  if (n >= index && index >= 0)
  {
    printf("\nThe original array : ");
    for (int i = 0; i < n; i++)
      printf("%d  ", arr[i]);
    for (int i = n; i > index; i--)
      arr[i] = arr[i - 1];
    arr[index] = num;
    printf("\nThe New array : ");
    for (int i = 0; i < n + 1; i++)
      printf("%d  ", arr[i]);
  }
  else
    printf("Please enter a valid index !");
  return 0;
}