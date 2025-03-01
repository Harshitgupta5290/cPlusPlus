#include<vector>
#include<iostream>

using namespace std;

class pascal_triangle {
   public:
   vector<vector<int>> generate(int numRows) {
      vector<vector<int>> r(numRows);

      for(int i=0; i<numRows; i++){ 
         r[i].resize(i+1);
         r[i][0] = r[i][i] = 1;
      
         for(int j=0; j< numRows; j++)
            r[i][j] = r[i - 1][j -1] + r[i - 1][j];
      } 
    return r;
    }
   
};
int main(){
   int numRows;
   cin>> numRows;
   cout<<"pascals triangle is "<<endl;
   pascal_triangle(r);
}