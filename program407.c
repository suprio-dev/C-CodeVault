#include <stdio.h>

int fibo(int n);

int main()
{
  int n;
  printf("Enter nth term of fibonacci series : ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    printf("%d  ", fibo(i));
  }
  return 0;
}

int fibo(int n)
{
  if (n == 1)
    return 1;
  if (n == 0)
    return 0;
  return fibo(n - 1) + fibo(n - 2);
}