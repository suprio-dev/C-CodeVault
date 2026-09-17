#include <stdio.h>
int main()
{
  int n, index, c = 0;
  printf("\nEnter array length : ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter the array elements :\n ");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter index of the number to be deleted : ");
  scanf("%d", &index);
  if (n > index && index >= 0)
  {
    printf("\nThe original array : ");
    for (int i = 0; i < n; i++)
      printf("%d  ", arr[i]);
    for (int i = index + 1; i < n; i++)
      arr[i - 1] = arr[i];
    printf("\nThe New array : ");
    for (int i = 0; i < n - 1; i++)
      printf("%d  ", arr[i]);
  }
  else
    printf("Please enter a valid index !");
  return 0;
}
