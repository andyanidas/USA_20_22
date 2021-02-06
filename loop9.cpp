#include<iostream>

using namespace std;

int main(){
	int num,sum = 0;
	cout<<"Enter any number: ";
	cin>>num;	//1235456
	
	for(;num>0;num/=10){
		sum += num%10;
	}
	cout<<"Sum of digits: "<<sum;
	
	return 0;
}
