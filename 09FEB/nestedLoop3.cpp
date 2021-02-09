#include<iostream>

using namespace std;

int main(){
	int Size;
	cout<<"Enter a num: ";
	cin>>Size;
	
	for(int i = 1; i<=Size; i++){
		for(int j = 1; j<=Size; j++){
			if(i == 1 || i==Size || j ==1 || j == Size || i == j || Size - i +1 == j){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
/*j=123456	
i=1	******	1-6	->  Size - 1 +1 == 6
i=2	**  **	2-5	-> 	Size - 2 +1 == j
i=3	* ** *	3-4		Size - i +1 == j
i=4	* ** *	4-3		Size - i +1 == j
i=5	**  **	5-2
i=6	******	6-1
	
	
	*/
	
	
	return 0;
}
