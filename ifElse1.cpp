#include<iostream>

using namespace std;

int main(){
	int day;
	cout<<"Enter a number (1-7): ";
	cin>>day;
	
	if(day == 1){
		cout<<"Mon";
	}else if(day == 2){
		cout<<"TU";
	}else if(day == 3){
		cout<<"wen";
	}else if(day == 4){
		cout<<"TR";
	}else if(day == 5){
		cout<<"Fr";
	}else if(day == 6){
		cout<<"Sa";
	}else if(day == 7){
		cout<<"Sun";
	}else{
		cout<<"The number you entered is not 1-7";
	}
	
	return 0;
}
