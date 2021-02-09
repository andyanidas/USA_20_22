#include<iostream>

using namespace std;

int main(){
	int Size;
	cout<<"Enter a num: ";
	cin>>Size;
	
	for(int i = 1; i<=Size; i++){
		for(int j = 1; j<=Size; j++){
			if(i == 1 || i==Size || j ==1 || j == Size){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
/*j=012345	
i=0	******
i=1	*    *
i=2	*    *
i=3	*    *
i=4	*    *
i=5	******
	
	
	*/
	
	
	return 0;
}
