#include<iostream>
using namespace std;

int multiply(int a, int b) {
     
     
      if(a == 0 && b == 0){
        return 0;
      }
      else{
        return (a + b - 1);
      }
     

}
int main() {
    int a,b, ans;
     
    cout << " enter the number need to multiply "<< endl;
    cin>> a>>b;

    ans = multiply(a,b);

    cout << "multiplicatiplucation of two numbers" << ans; 
 
}