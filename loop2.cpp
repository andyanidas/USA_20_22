#include<iostream>

using namespace std;

int main(){
	
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	for(int j = 1; j<=num ; j++){
		cout<<j<<" ";
	}
	
	bool check = true;
	string answer;
	
	while(check){
		cout<<"Do you wanna quit? :";
		cin>>answer;
		if(answer == "yes"){
			cout<<"Bye bye!";
			check = false;
		}else if(answer == "no"){
			cout<<"Okey for now."<<endl;
		}else{
			cout<<"sorry i couldnt undersand please try again."<<endl;
		}
	}
	/*
	for(bool check = true;check;){
		cout<<"Do you wanna quit? :";
		cin>>answer;
		if(answer == "yes"){
			cout<<"Bye bye!";
			check = false;
		}
	}
	*/
	
	
	return 0;

}

