  
#include<stdio.h>
int pf() 
{
   int a;

      printf("enter a value");
      scanf("%d",&a);
 
  if(a==18)
  {
    return 1;
  }
  else
  {
     return 0;
  }
}
void main()
{
    int a;
    a=pf();
    printf("ans:%d",a);
}