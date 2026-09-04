#include <stdio.h>
int main()
{
int balance,amount;
printf("Enter account balance : ");
scanf("%d",&balance);
printf("Enter withdrawal amount : ");
scanf("%d",&amount);
if(amount%100==0 && balance-amount>=50)
printf("Transaction succesful !");
else 
printf("Transaction failed !!");
return 0;
}