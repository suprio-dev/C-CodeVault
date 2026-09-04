#include <stdio.h>
int main()
{
int cars,trucks,total;
printf("Enter number of cars : ");
scanf("%d",&cars);
printf("Enter number of trucks : ");
scanf("%d",&trucks);
total=60*cars+100*trucks;
if(total>=10000)
printf("Profit !\n");
else 
printf("Loss !\n");
return 0;
}