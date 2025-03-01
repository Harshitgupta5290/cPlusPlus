//spiral print in 2d array

// write a function that takes in n x m 2d array, and prints the all array elements in a spiral order.
//Start from top left corner goes to right, proceeds in a spiral pattern until every element is visited...

// input
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16 

//output
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

#include<iostream>
using namespace std;

void print(int arr[][10], int n, int m){

// 4 variables
int startRow = 0;
int endRow = n - 1; //n is number of rows
int startCol = 0;
int endCol = m - 1; // m is the number of columns

//outer loop(traverse array boundary)
while(startCol <= endCol and startRow <= endRow){

    // start row
    for(int col = startCol; col <= endCol; col++){
        cout<< arr[startRow][col]<<" ";
    }

    //end col
    for(int row = startRow + 1; row <= endRow; row++){
        cout<< arr[row][endCol]<<" ";
    }

    // end row
    for(int col = endCol - 1; col >= startCol; col--){
        if(startRow == endRow){
            break;
        }
        cout<< arr[endRow][col]<<" ";
    }
   
   // start col
   for(int row = endRow - 1; row >= startRow + 1; row--){
    if(startCol == endCol){
        break;
    }
     cout<< arr[row][startCol]<<" ";
   }

   //update the variables to point to  inner spiral
    startRow++;
    endRow--;
    startCol++;
    endCol--;
}
  
}

int main(){

    //print in spiral form
    int arr[][10] = { {1, 2, 3, 4},
                     {12,13,14,5},
                     {11,16,15,6},
                     {10, 9, 8,7} };
    
    int n=4, m=4;

print(arr,n,m);

return 0;
}
