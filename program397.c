#include <stdio.h>

void linearSearch(int arr[5], int num);
int c = 0, ul, ll, mid;
int main()
{

  int arr[5], num;
  printf("Enter array elements : ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter element to be searched : ");
  scanf("%d", &num);
  linearSearch(arr, num);
  return 0;
}

void linearSearch(int arr[5], int num)
{
  ul = 4;
  ll = 0;
  while (ll <= ul)
  {
    mid = (ll + ul) / 2;
    if (arr[mid] == num)
    {
      c++;
      break;
    }
    if (num > arr[mid])
      ll = mid + 1;
    if (num < arr[mid])
      ul = mid - 1;
  }
  if (c == 1)
    printf("\nSearch Successful !");
  else
    printf("\nSearch Unsuccessful !");
}
