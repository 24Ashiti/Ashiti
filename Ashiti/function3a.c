#include<stdio.h>
int perfect()
{
   int num,sum=0,i;
   printf("enter value");
   scanf("%d",&num);

   for(i=1;i<num;i++)
   {
      if(num%1==0)
      {
        printf("\n%d",i);
        sum=sum+i;
      }
   }
   if(sum=num)
   {
      printf("\n%d perfect num ",sum);
   }
   else
   {
      printf("\n%d not perfect num ",sum); 
   }  
   return sum;
}  
 int main()
{
  perfect();
}