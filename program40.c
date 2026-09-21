#include <stdio.h>
#include <string.h>
int main()
{
  int n, alpha_count = 0, digit_count = 0, special_count = 0;
  char password[100];
  printf("Enter password : ");
  fgets(password, 100, stdin);
  for (int i = 0; password[i] != '\0' && password[i] != '\n'; i++)
  {
    if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z'))
      alpha_count++;
    else if (password[i] >= '0' && password[i] <= '9')
      digit_count++;
    else
      special_count++;
  }
  if (strlen(password) - 1 < 6)
    printf("\nWeak Password !");
  if ((strlen(password) - 1 >= 6 && strlen(password) - 1 <= 10) && alpha_count != 0 && digit_count == 0 && special_count == 0)
    printf("\nModerate Password !");
  if ((strlen(password) - 1 >= 6 && strlen(password) - 1 <= 10) && alpha_count != 0 && digit_count != 0 && special_count == 0)
    printf("\nStrong Password !");
  if ((strlen(password) - 1 > 10) && alpha_count != 0 && digit_count != 0 && special_count != 0)
    printf("\nVery Strong Password !");
  return 0;
}