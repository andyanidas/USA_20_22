#include<iostream>

using namespace std;

int main(){
	int arr[] = {5,123,5,3,2};
	int index,num;
	int Size = sizeof(arr)/sizeof(arr[0]);
	
	
	cout<<"Where do you want to insert: ";
	cin>>index;
	cout<<"Enter the element that you want to insert: ";
	cin>>num;
	
	
	for(int i = 0; arr[i] != '\0' ; i++){
		cout<<arr[i]<<" ";
	}
	
	for(int i = Size; i>=index-1; i--){
		arr[i+1] = arr[i];
	}
	cout<<endl;
	for(int i = 0; arr[i] != '\0' ; i++){
		cout<<arr[i]<<" ";
	}
	
	arr[index-1] = num;
	cout<<endl;
	for(int i = 0; arr[i] != '\0' ; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
