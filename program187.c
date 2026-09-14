#include <stdio.h>
int main()
{
  int n, sum = 0, c = 0;
  printf("Enter the length of the array : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter %dth integer of the array : ", i);
    scanf("%d", &arr[i]);
  }
  printf("\nOriginal Array :\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  for (int i = 0; i < n / 2; i++)
  {
    int first_element = arr[i];
    int last_element = arr[n - i - 1];
    arr[i] = last_element;
    arr[n - i - 1] = first_element;
  }
  printf("\nReversed Array :\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}