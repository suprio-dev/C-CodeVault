#include <stdio.h>

void linearSearch(int arr[5], int num);
int c = 0;
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
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == num)
    {
      c++;
      break;
    }
  }
  if (c == 1)
    printf("\nSearch Successful !");
  else
    printf("\nSearch Unsuccessful !");
}