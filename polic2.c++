#include<iostream>
using namespace std;
int main(){
	int sizeofarray;
	int a[10];
	cin>> sizeofarray;
	for(int i=0;i<sizeofarray;++i){
		cin>>a[i];
	}
	int count = 0;
	for(int i = 1; i<sizeofarray-1;++i){
		if(a[i-1]==0 && a[i]==1 && a[i+1]==0){
			count++;
			a[i+1] = 1;
		}
	}
	cout<<count<<endl;
	return 0;
}