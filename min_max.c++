//Write a C++ function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 
#include<iostream>
using namespace std;

struct Pair {                //struct pair is used to return two value at a a same time getmaxmin ()
   int max;
   int min;
};

Pair getMaxMin(int arr[], int n) {
   struct Pair maxmin;
   int i;
   
   if(n == 1) {
      maxmin.max = arr[0];
      maxmin.min = arr[0];
      return maxmin;
   }
   else if( arr[0] > arr[1] ) {
      maxmin.max = arr[0];
      maxmin.min = arr[1];
   }
   else{
      maxmin.min = arr[1];
      maxmin.max = arr[0];
   }
   for(i=2;i<n;i++) {
      if(arr[i] > maxmin.max ) {
         maxmin.max = arr[i];
      }
      else if(arr[i] < maxmin.min ) {
         maxmin.min = arr[i];
      }
   }
   return maxmin;

}

int main()  {
  
  int arr[] = {10,21,22,78,23,12};
  
  int n = sizeof(arr)/ sizeof(arr[0]);

  struct Pair maxmin = getMaxMin(arr, n);

  cout<<"minimum element is " << maxmin.min <<endl;

  cout<<"maximum element is " << maxmin.max << endl;

   return 0;        
}