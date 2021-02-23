#include<iostream>

using namespace std;

int main(){
	string contacts[1000][4] = {{"Boldoo","Bataa","99556644","zaisan 26-15"},{"tsetsge","dorj","99564444","horoolol 26-15"}};
	cout<<"Name\t\tSurename\tNumber\t\t\tAddress"<<endl;
	cout<<"-----------------------------------------------------------------------\n";
	for(int i = 0; i<2; i++){
		for(int j = 0; j<4; j++){
			cout<<contacts[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	/*
	dotroo 2 elementtei dictionary hiine
	ehnii element ENglish word
	2 dahi element mongolian word
	
	*/
	
	
	
	return 0;
}
