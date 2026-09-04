

#include <stdio.h>
int main()
{

for(int i=1;i<=5;i++)
{
if(i%2==0)
{
  int k=2;
 for(int j=1;j<=i;j++)
 {

printf("%d ",k);
k+=2;

 }
printf("\n");
  


}

else
{
 int k=1;
 for(int j=1;j<=i;j++)
 {

printf("%d ",k);
k+=2;

 }
printf("\n");
  

}

 
}

 return 0; 
}