#include<iostream>

using namespace std;

int main(){
	int x = 63;	//
	int y = 10;
	int mod;
	
	x = x + y;			// = -> assignment sign // whatever in the right side assing into the left
	//now x is 73
	
	mod = x % y;
	
	x += y;		// x = 83
	cout<<x<<endl;
	x *= y;		// x = 830
	cout<<x<<endl;
	
	
	
	cout<<mod;
	
	
	
	
	return 0;
}
