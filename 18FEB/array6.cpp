#include<iostream>

using namespace std;

int main(){
	int arr[] = {99, 1, 3, 8, 6, 6, 75, 38, 3, 2}; //{-1-2-3-4}
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int num,insertIndex,deleteIndex;
	cout<<"Enter the number you wanna inster: ";
	cin>>num;	//5
	cout<<"Position that you want to instert: ";
	cin>>insertIndex;	//2
	
	
	
	for(int i = arrSize-1; i>=insertIndex-1 ;i--){
		arr[i+1] = arr[i];
	}
	arrSize++;
	
	arr[insertIndex-1] = num;
	
	
	for(int i = 0; i<arrSize ; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nEnter the position number that you want to delete: ";
	cin>>deleteIndex;	//2
	for(int i = deleteIndex-1; i<arrSize ;i++){
//		cout<<"\n counting for loop "<<i;
		arr[i] = arr[i+1];
	}
	arr[arrSize-1] = '\0';
	arrSize--;
	for(int i = 0; i<arrSize ; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
