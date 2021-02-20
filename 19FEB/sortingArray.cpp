#include<iostream>

using namespace std;

int main(){
	int arr[] = {20, 2, 10, 6, 52, 31, 0, 45, 79, 40};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0; i<arrSize; i++){
		for(int j = i+1; j<arrSize; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i = 0; i<arrSize ; i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
