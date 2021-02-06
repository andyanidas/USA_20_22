#include<iostream>

using namespace std;

int main(){
	int day;
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"Mon";
			break;
		case 2:
			cout<<"TU";
			break;
		case 3:
			cout<<"WE";
			break;
		case 4:
			cout<<"TH";
			break;
		case 5:
			cout<<"FR";
			break;
		case 6:
			cout<<"SA";
			break;
		case 7:
			cout<<"Su";
			break;
		default:
			cout<<"Wrong input!";
			break;	
	}
	
	
	
	
	return 0;
}
