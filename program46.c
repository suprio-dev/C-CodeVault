#include <stdio.h>
int main()
{
int marks;
printf("Pass marks is 30 !");
printf("\n");
printf("Enter marks(out of 100):");
scanf("%d",&marks);
if(marks>=30 && marks<=100)
printf("Actual Marks obtained is %d \nPasses normally !\n",marks);
else if(30-marks<=5 && 30-marks>0)
printf("Actual Marks obtained is %d \n Total marks obtained by adding grace marks is %d \n Passes by Grace !",marks,30-marks+marks);
else
printf("Fail !!");
return 0;
}