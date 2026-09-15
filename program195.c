#include <stdio.h>
int main()
{
  int arr[5], c = 0, num;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ", i);
    scanf("%d", &arr[i]);
  }
  printf("\nEnter element to be searched : ");
  scanf("%d", &num);
  for (int i = 0; i < 5; i++)
  {
    if (num == arr[i])
      c++;
  }
  if (c > 0)
    printf("Element found !");
  else
    printf("Element not present in array !");
  return 0;
}