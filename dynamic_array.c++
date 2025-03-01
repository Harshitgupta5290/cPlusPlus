#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //dynamic array
    int *arr = new int[n];

    //cout<< arr << endl;

    for(int i=0;i<n;i++){
        arr[i]=i;
        cout<<arr[i]<<" ";
    }
    cout<< endl;

   //deleting it dynamically
   delete [] arr;  

   // cout << arr << endl; 

}