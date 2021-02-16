#include<iostream>

using namespace std;

int main(){
	int arr[5] = {1,2,3},max,min;	//null "\0"
	
	arr[3] = 4;
	arr[4] = 1000;
	
	for(int i = 0; i<5 ; i++){
		if(arr[i] != '\0'){
			cout<<arr[i]<<" ";
		}
	}
	
	// 1 2 3 4 1000
	max = arr[2];
	min = arr[2];
	for(int i = 0; i<5 ; i++){
		if my array[i] is greater than max then my array[i] is my new max
		if my array[i] is less than min then my array[i] is my new min
	}
	
	//arr1[5]
	/*
	arr1[0] = arr[0];
	*/
	
	
	
	return 0;
}
