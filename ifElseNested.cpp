#include<iostream>

using namespace std;

int main(){
	string rainy,goOut;
	cout<<"is it raining? :";
	cin>>rainy;
	cout<<"Going out? :";
	cin>>goOut;
	
	if(rainy == "yes"){
		if(goOut == "yes"){
			cout<<"Take the umberella";
		}else{
			cout<<"Its a rainy day";
		}
	}else{
		if(goOut == "yes"){
			
			cout<<"Just go out";
		}else{
			cout<<"okey";
		}
	}
	
	return 0;
}
