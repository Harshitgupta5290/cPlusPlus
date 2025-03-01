#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[] =  "asdffds";//{'a', 's', 'e','w','k','\0'}; //always terminate with null character...

    cout<< a<<endl;
    cout<< strlen(a)<<endl;
    cout<< sizeof(a)<<endl;

    
    return 0;

}