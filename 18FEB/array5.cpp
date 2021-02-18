#include<iostream>

using namespace std;

int main(){
	int arr[10] = {99, 1, 3, 8, 6, 6, 75, 38, 3, 2}; //{-1-2-3-4}
	int maxim1,maxim2;
	
	if(arr[0]>arr[1]){
		maxim1 = arr[0];
		maxim2 = arr[1];
	}else{
		maxim1 = arr[1];
		maxim2 = arr[0];
	}
	
	
	
	for(int i = 2; i<10; i++){
		if(maxim1<arr[i]){
			maxim2 = maxim1;
			maxim1 = arr[i];
		}else{
			if(arr[i]>maxim2){
				maxim2 = arr[i];
			}
		}
	}
	cout<<maxim2;
	
	
	
	return 0;
}
