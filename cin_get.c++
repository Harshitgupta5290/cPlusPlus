#include<iostream>
using namespace std;

/*int main()
{
    char sentence[1000];

    char temp = cin.get();

    int len = 1;
    while(temp != '#'){
        len++;
        cout << temp;
        //update the value of temp
        temp = cin.get();
   }
   cout<< "length " <<len <<endl; 
}*/

int main(){
    
    char sentence[1000];
    char temp = cin.get();

    int len = 0;
    while(temp != '#'){
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';

    cout<< "length "<<len <<endl;
    cout<< sentence << endl;
}