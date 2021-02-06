#include<iostream>

using namespace std;

int main(){
	int num, firstDigit, lastDigit;
	cout<<"Enter any number: ";
	cin>>num;	//1235456
	lastDigit = num%10;
	for(;num>0;num/=10){
		firstDigit = num;
	}
	cout<<"First : "<<firstDigit<<endl<<"Last : "<<lastDigit;
	
	
	return 0;
}
