#include<iostream>

using namespace std;

int main(){
	int num,countDigit =0;
	cout<<"Enter any number: ";
	cin>>num;	//1235456
	
	for(;num>0;num/=10){
		countDigit++;
	}
	cout<<"Digits in given num: "<<countDigit;
	
	
	return 0;
}
