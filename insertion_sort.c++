#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
     for(int i=0; i<=n-1; i++){
        int current = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev]> current){ //loop to find out the right index where the element current should 
            arr[prev + 1] = arr[prev];          // be inserted....
            prev = prev - 1;
        }
       arr[prev + 1] = current; 
     }
}
int main(){
  int arr[] = {20,1,3,2,7,6,8,4,5,18,15,14};
    int  n = sizeof(arr)/ sizeof(int);
    insertion_sort(arr, n);

    for(auto x : arr){
        cout<< x << ",";
    }

    return 0;
}


