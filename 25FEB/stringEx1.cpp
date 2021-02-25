#include<iostream>

using namespace std;

int main(){
	string name = "qa";
	string surename = "erdene";
	string fullName;
	fullName = name + " " + surename;
	name[0] = name[0] - 32;
	cout<<name;
	/*
	if(name>surename){
		cout<<"name>surename";
	}else{
		cout<<"else part is running";
	}
	*/
	
	
	
	return 0;
}
