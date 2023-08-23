#include <stdio.h>  
  
void bubblesort(int a[], int n) 
{  
  int i, j;  
  for (i = 0; i < n ; i++) 
  {  
    for (j = 0; j < n - 1; j++) 
    {  
      if (a[j] >a [j + 1])
       {  
          int swapp=a[j];
              a[j]=a[j+1];
              a[j+1]=swapp;
       }  
    }  
  }  
}  
int main() 
{  
  int a[] = {76,45,3,7,97,25,56,8,10,15};  
  int n =sizeof (a)/sizeof(a[0]);  
  bubblesort(a, n);  
  printf("Sort array: ");  
  for (int i = 0; i < n; i++)
   {  
    printf("%d ", a[i]);  
   }  
  return 0;  
}  