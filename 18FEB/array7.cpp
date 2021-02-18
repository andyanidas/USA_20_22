#include<iostream>

using namespace std;

int main(){
	int arr[] = {1, 2, 3, 5, 1, 5, 20, 2, 12, 10};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	bool uniq = true;
	
	for(int i = 0; i<arrSize; i++){
		for(int j = 0; j<arrSize; j++){
			if(arr[i] == arr[j] && i != j){
				uniq = false;
			}
		}
		if(uniq){
			cout<<arr[i]<<" ";
		}
		uniq = true;
	}
	
	return 0;
}
