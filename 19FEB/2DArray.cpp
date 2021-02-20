#include<iostream>

using namespace std;

int main(){
	int arr[100][3] = {{1,2,3},{2,3,11},{4,5,44},{0,2,20},{99,22,0}};
	cout<<arr[2][0]<<endl;
	arr[2][0] = 999;
	cout<<arr[2][0]<<endl;
	
	for(int i = 0; i<5; i++){
		for(int j = 0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
