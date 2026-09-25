#include <stdio.h>
int main()
{

  int arr[5], num, c = 0, ul, ll, mid;
  printf("Enter array elements (in ascending order) : ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter element to be searched : ");
  scanf("%d", &num);
  ul = 4;
  ll = 0;
  while (ll < ul)
  {
    if (arr[ll] == num || arr[ul] == num)
    {
      c++;
      break;
    }
    mid = (ll + ul) / 2;
    if (arr[mid] == num)
    {
      c++;
      break;
    }
    if (num >= arr[mid])
      ll = mid + 1;
    if (num <= arr[mid])
      ul = mid - 1;
  }
  if (c == 1)
    printf("\nElement Found !");
  else
    printf("\nElement not found !");
  return 0;
}