#include<iostream>   //time complexity is O(N + range)...
#include<vector>
using namespace std;

void counting_sort(int a[], int n){
   //declaring largest element
   int largest = -1;

   for(int i=0; i<n; i++){
       largest = max(largest, a[i]);
   }

   //creating a count array using vector
   vector<int> freq(largest+1, 0);

   //updating the freq array
   for(int i=0; i<n; i++){
       freq[a[i]]++;
   }

   //now, putting back the elements from freq array to original array
   int j=0;
   for(int i=0; i<=largest; i++){
       
       while(freq[i]>0){
           a[j] = i;
           freq[i]--;
           j++;
       }
   }
  return;

}

int main(){
    int a[] = {4,1,6,4,2,1,8,7,13,12,15,3,5,6,20};
    int n = sizeof(a)/sizeof(int);
    counting_sort(a,n);
    
    for(int i=0;i<n; i++){
        cout<< a[i] << " ";
    }    
    return 0;
}