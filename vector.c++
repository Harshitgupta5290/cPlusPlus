#include<iostream>
#include<vector>
using namespace std;

int main(){

    //demo vector
    vector<int> arr = {1,2,3,4,5};

    //fill constructor
    vector<int> arr(10,7);

    //fill constructor
    vector<int> visited(100,0);

    //pop back
    arr.pop_back();

    //push_back gives O(1)constant value
    arr.push_back(12);
    
    //print all the elements 
    for(int i=0; i< arr.size(); i++){
        cout<< arr[i] << endl;
    }

    //size of the vector(no of elements)
    cout<< arr.size()<<endl;

    //capapcity of the vector
    cout<< arr.capacity()<<endl;


    return 0;

}