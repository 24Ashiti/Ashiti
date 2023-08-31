#include <stdio.h>
int recursiveBinarySearch(int a[], int low, int high, int j){
   if (high>=low){
      int mid = low + (high )/2;
      if (a[mid] == j)
         return mid;
      if (a[mid] > j)
         return recursiveBinarySearch(a, low, mid-1, j);
      return recursiveBinarySearch(a, mid+1, high, j);
   }
   return -1;
}
int main(void){
   int a[] = {2, 4, 6, 9, 14, 26, 30};
   int n = 7;
   int j = 9;
   int result = recursiveBinarySearch(a, 0, n-1, j);
   if(result == -1 ) {
      printf("Element not found ");
   }
   else {
      printf("Element found at index : %d",result);
   }
   return 0;
}   