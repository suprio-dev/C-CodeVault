#include <stdio.h>
int main()
{
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int numbers[n];
  printf("Enter array elements :\n ");
  for (int i = 0; i < n; i++)
    scanf("%d", &numbers[i]);
  printf("\nUnsorted Array :\n");
  for (int i = 0; i < n; i++)
    printf("%d\t", numbers[i]);
  for (int i = 0; i < n; i++){
    int max = numbers[i];
    for (int j = i; j < n; j++)
    {
      if (numbers[j] > max)
        max = numbers[j];
    }
    int c = i;
    for (int m = i; m < n; m++)
    {
      if (numbers[m] == max)
        break;
      c++;
    }
    int t = numbers[i];
    numbers[i] = max;
    numbers[c] = t;
  }
  printf("\nSorted Array (Descending Order) :\n");
  for (int i = 0; i < n; i++)
    printf("%d\t", numbers[i]);
  return 0;
}