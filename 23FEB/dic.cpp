#include<iostream>

using namespace std;
//"\0" -> null buyu hooson
int main(){
	string dic[1000][2] = {{"Blue","Tsenher"},{"Grey","saaral"},{"Green","Nogoon"},{"car","mashin"}};
	cout<<"English\t\tMongolian"<<endl;
	cout<<"-----------------------------------------------------------------------\n";
	int count= 0;
	int index = 2;
	//counting words in my dictionary
	for(int i = 0 ; dic[i][0] != "\0" ; i++){
		count++;
	}
	
	//printing words in my dic
	for(int i = 0; dic[i][0] != "\0"; i++){
		for(int j = 0; j<2; j++){
			cout<<dic[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	
	//deleting index'th word from my dic
	for(int i = index-1; i<count; i++){
		dic[i][0]=dic[i+1][0];
		dic[i][1]=dic[i+1][1];
	}
	
	//printing words in my dic
	cout<<"English\t\tMongolian"<<endl;
	cout<<"-----------------------------------------------------------------------\n";
	
	for(int i = 0; dic[i][0] != "\0"; i++){
		for(int j = 0; j<2; j++){
			cout<<dic[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
