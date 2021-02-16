#include<iostream>

using namespace std;

int main(){
	string sentence = "hello what is your name: ";
	string name;
	
	cin>>name;
	cout<<"name = "<<name<<endl;
	
	cout<<sentence<<endl;
	
	cin.ignore();
	getline(cin,name);
	cout<<"name = "<<name;
	
	
	
	return 0;
}
