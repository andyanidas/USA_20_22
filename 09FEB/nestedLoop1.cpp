#include<iostream>

using namespace std;

int main(){
	int Size;
	cout<<"Enter a num: ";
	cin>>Size;
	
	for(int i = 1; i<=Size; i++){
		for(int j = 1; j<=Size; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
