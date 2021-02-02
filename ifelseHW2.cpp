#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter 3 integers: ";
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<a;
		}else{
			cout<<c;
		}
	}else{
		if(b>c){
			cout<<b;
		}else{
			cout<<c;
		}
	}
	/*
	if(number%5==0 && number%11==0)
	if(number%2==0)
	if((input>='a' && input<='z') || (input>='A' && input<='Z'))
	*/
	
	
	
	return 0;
}
