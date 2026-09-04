#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int num, c = 0, original_num;
    int first_part, second_part;
    int first_sum = 0, second_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;
    while (num != 0)
    {
        int digit = num % 10;
        c++;
        num /= 10;
    }
    srand(time(NULL));
    int min = 1, max = c - 1;
    int range = rand() % (max - min + 1) + min;
    first_part = original_num / pow(10, range);
    second_part = original_num % (int)pow(10, range);
    while (first_part != 0)
    {
        int digit = first_part % 10;
        first_sum += digit;
        first_part /= 10;
    }
    while (second_part != 0)
    {
        int digit = second_part % 10;
        second_sum += digit;
        second_part /= 10;
    }
    if (first_sum == second_sum)
        printf("Equal Halves!");
    else
        printf("Unequal Halves!");
    return 0;
}