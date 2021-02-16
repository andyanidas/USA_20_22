#include<iostream>

using namespace std;

int main(){
	int s;
	cout<<"Enter the size: ";
	cin>>s;
	int arr[s];
	
	cout<<"Enter "<<s<<" elemens"<<endl;
	for(int i = 0; i<s ; i++){
		cin>>arr[i];
	}
	cout<<"What is inside my array:\n";
	for(int i = 0; i<s ; i++){
		cout<<arr[i]<<" ";
	}
	
	
	
	
	return 0;
}
