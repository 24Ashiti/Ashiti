#include<stdio.h>
int main()
{
   int ary[10],num,odd_sum=0,even_sum=0;
   
   printf("enter value of num\n");
   scanf("%d",&num);
   for(int i=0;i<10;i++)
   {
      if(i%2==0)
       {
           even_sum=even_sum+1;
              printf("even number=%d\t",i);
              printf("\n");
       }
       else
       {
           odd_sum=odd_sum+1;
           printf("odd number=%d\t",i);
       }
   }
    printf("sum of all odd numbers=%d\n",odd_sum);
    printf("sum of all even numbers=%d\n",even_sum);
  
return 0;
}