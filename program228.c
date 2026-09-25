#include <stdio.h>
int main()
{

  int arr[5], num, c = 0;
  printf("Enter array elements : ");
  for (int i = 0; i < 5; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter element to be searched : ");
  scanf("%d", &num);
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == num)
    {
      c++;
      break;
    }
  }
  if (c == 1)
    printf("\nElement Found !");
  else
    printf("\nElement not found !");
  return 0;
}