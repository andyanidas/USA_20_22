#include<iostream>

using namespace std;

int main(){
	int Size;
	cout<<"Enter a num: ";
	cin>>Size;
	
	for(int i = 1; i<=Size; i++){
		
		for(int j = 1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
/*j=123456	
i=1 *     	Size - i ->space
i=2 **    	Size - i ->space
i=3 ***   	Size - i ->space
i=4 ****  
i=5 ***** 
i=6 ******
	
	
	*/
	
	
	return 0;
}
