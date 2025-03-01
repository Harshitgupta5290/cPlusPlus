#include<iostream>
using namespace std;

int main(){

    char numbers [][10] = {
     "one",
     "two",
     "three",
     "forty",
     "fifty",
     "hundred"
    };
    //instead of a loop we can also print particular row by "int i= number" which is to called
   int i= 3;
   cout<<numbers[i]<<endl;

   /* for(int i=0; i<6; i++){
        cout<<numbers[i]<<endl;
    }*/

    return 0;
}