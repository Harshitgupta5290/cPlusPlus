#include<iostream>
#include<vector>
using namespace std;

int main(){

    //2d vector
    vector< vector<int> > arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9,10},
        {11,12}

    };
     //this for starting element and it wil start with 11
    //arr[0][0] += 10;

    for(int i=0; i< arr.size(); i++){

        for(int number : arr[i]){
            cout<< number << ",";
        }
        cout<< endl;
    }

    return 0;
}