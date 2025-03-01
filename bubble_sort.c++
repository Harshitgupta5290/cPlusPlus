#include<iostream>
using namespace std;

void bubble_sort(int a[], int n){
     for(int times=1; times<=n-1; times++){
                                        
         for(int j=0; j<= n - times - 1; j++){    // for repeated swapping in one iteration...
              
              if(a[j] > a[j+1]){
                 swap(a[j], a[j+1]);
             }
         }
     } 
}

//main driver code
int main(){
    int a[] = {12,2,1,7,5,4,8,3,6,-1,0,10};
    int n = sizeof(a)/sizeof(int);
    
    bubble_sort(a,n);
    
    for(auto x : a){
        cout<< x <<",";
    }
return 0;
}