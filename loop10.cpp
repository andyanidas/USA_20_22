#include<iostream>

using namespace std;

int main(){
	int num,newNum=0;
	cout<<"Enter any number: ";
	cin>>num;	//123456 -> 654321
	
	for(;num>0;num/=10){
		newNum = newNum*10 + num%10;
	}
	cout<<"New Number: "<<newNum;
	
	return 0;
}
