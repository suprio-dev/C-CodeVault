#include <stdio.h>
int main()
{
float price;
printf("Enter price:");
scanf("%f",&price);
if(price > 5000)
printf("Final price : %.2f\n",price - price * 0.2);
else if(price >=2000 && price<= 5000)
printf("Final price : %.2f\n",price - price * 0.1);
else
printf("Final price : %.2f\n",price - price * 0.05);
return 0;
}