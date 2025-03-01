#include<iostream>
using namespace std;

int** create2darray(int rows, int cols){
  
    int** arr = new int*[rows];

    //allocate memory for each row 
    for(int i=0;i<rows;i++){
        arr[i] = new int[cols];
    }
 
    //init the array with increasing list of numbers
    int value = 0;

    for(int i=0;i<rows;i++){
       for(int j=0; j<cols; j++){
           arr[i][j] = value;
           value++;
       }
    }
    return arr;
}

int main(){

    //dynamic array 
    int rows,cols;
    cin>>rows>>cols;

    int **arr = create2darray(rows,cols);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}