#include<iostream>

using namespace std;
//"\0" -> null buyu hooson
int main(){
	string dic[1000][2] = {{"Blue","Tsenher"},{"Grey","saaral"},{"Green","Nogoon"},{"car","mashin"}};
	int count= 0;
	int index;
	//counting words in my dictionary
	for(int i = 0 ; dic[i][0] != "\0" ; i++){
		count++;
	}
	
	//1.add,2.remove,3.prnt,4.exit
	int choice = 0;
	while(1){
		cout<<"Choose your operation number"<<endl;
		cout<<"-----------------------------------------"<<endl;
		cout<<"1.Add a word\n2.Remove word from Dic\n3.Print words\n4.Exit program."<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		if(choice == 4){
			break;
		}
		if(choice == 1){//adding word into my dic
			string eng, mon;
			cout<<"English: ";
			cin>>eng;
			cout<<"Monglian: ";
			cin>>mon;
			dic[count][0] = eng;
			dic[count][1] = mon;
			count++;
		}
		if(choice == 2){
			//deleting index'th word from my dic
			string toDel;
			bool found = false;
			cout<<"Which word you want to delete: ";
			cin>>toDel;
			
			//finding the index num from the word
			
			for(int i = 0; dic[i][0] != "\0"; i++){
				for(int j = 0; j<2; j++){
					if(toDel==dic[i][j]){
						index = i;
						found = true;
					}
				}
			}
			//deleting the word in index'th
			if(found){
				for(int i = index; i<count; i++){
					dic[i][0]=dic[i+1][0];
					dic[i][1]=dic[i+1][1];
				}
				count--;
			}else{
				cout<<"Sorry we couldnt find the word that you want to delete!"<<endl;
			}
			
		}
		if(choice == 3){
			//printing words in my dic
			cout<<"English\t\tMongolian"<<endl;
			cout<<"-----------------------------------------------------------------------\n";
	
			for(int i = 0; dic[i][0] != "\0"; i++){
				for(int j = 0; j<2; j++){
					cout<<dic[i][j]<<"\t\t";
				}
				cout<<endl;
			}
			cout<<endl;
		}
	}
	
	return 0;
}
