#include<iostream>

using namespace std;

int main(){
	string sentences[5];
	for(int i = 0; i < 5; i++){
		getline(cin,sentences[i]);
	}
	for(int i = 0; i < 5; i++){
		cout<<sentences[i]<<"\n";
	}
	

	return 0;
}
/*
string menu
hereglegchees yuu zaihlhiig n asuuna
hereglegch urt zahialga ogno teriig n hadgalj avch uldene
*/
