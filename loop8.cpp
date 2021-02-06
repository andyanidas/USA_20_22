#include<iostream>

using namespace std;

int main(){
	int num,temp, firstDigit, lastDigit,tenPower = 1,countDigit = 0;
	cout<<"Enter any number: ";
	cin>>num;	//123456
	lastDigit = num%10;
	temp = num;	//123456
	//finding first digit
	for(;temp>0;temp/=10){
		firstDigit = temp;
	}
	//cout<<"First Digit :"<<firstDigit<<endl;
	
	temp = num;
	for(;temp>0;temp/=10){
		countDigit++;
	}
	//cout<<"Count Digit :"<<countDigit<<endl;
	temp = num;
	//123450 + 1 = 123451 % 100000 = 23451
	temp = (temp/10)*10 + firstDigit;
	//cout<<"Implementing last digit :"<<temp<<endl;
	for(int i = 1; i<countDigit; i++){//countDigit = 6
		tenPower = tenPower*10;
	}
	
	//cout<<"power of ten :"<<tenPower<<endl;
	//temp = 123451 -> temp = 23451 + 6*100000
	temp=temp%tenPower;
	//cout<<"cutting first digit :"<<temp<<endl;
	temp = temp + lastDigit*tenPower;
	cout<<"New Number :"<<temp;
	return 0;
}
