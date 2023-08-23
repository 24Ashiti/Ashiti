#include<stdio.h>  
  
void selectionsort(int a[], int n) 
{  
  int i, j;  
  for (i = 0; i < n ; i++) 
  {  
    for (j = i+1; j < n; j++) 
    {  
      if (a[i] >a [j])
       {  
          int swapp=a[j];
              a[j]=a[i];
              a[i]=swapp;
       }  
    }  
  }  
}  
int main() 
{  
  int a[] = {76,45,3,7,97,25,56,8,10,15};  
  int n =sizeof (a)/sizeof(a[0]);  
  selectionsort(a, n);  
  printf("Sort array: ");  
  for (int i = 0; i < n; i++)
   {  
    printf("%d ", a[i]);  
   }  
  return 0;  
}  