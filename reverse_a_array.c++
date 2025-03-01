#include<iostream>
using namespace std;

void reverse_array(int arr[],int start, int end) {
    
    while(start < end) {
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
    }  
}

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
        cout<<endl;
    }
}

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   int size = sizeof(arr)/sizeof(arr[0]);

   printarray(arr, size);

   reverse_array(arr, 0 , size-1);
   
   cout<<"reversed array is: "<<endl;
   printarray(arr, size);

   return 0;
}