#include<iostream>

using namespace std;

int main(){
	int arr[] = {5,123,5,3,2};
	int index;
	int Size = sizeof(arr)/sizeof(arr[0]);
	
	
	cout<<"Which element you want to delete: ";
	cin>>index;
	
	//printing elements of my arr
	for(int i = 0; arr[i] != '\0' ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//deleting elements of my arr[index-1]
	for(int i = index-1; i<Size; i++){
		arr[i] = arr[i+1]; 
	}
	
	//printing elements of my arr
	for(int i = 0; arr[i] != '\0' ; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
