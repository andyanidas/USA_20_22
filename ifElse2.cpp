#include<iostream>

using namespace std;

int main(){
	string rainy,goOut;
	cout<<"is it raining? :";
	cin>>rainy;
	cout<<"Going out? :";
	cin>>goOut;
	
	if(rainy == "yes" && goOut == "yes"){
		cout<<"Take the umberella";
	}else if(rainy == "no" && goOut == "yes"){
		cout<<"Just go out";
	}else if(rainy == "no" && goOut == "no"){
		cout<<"okey";
	}
	
	return 0;
}
