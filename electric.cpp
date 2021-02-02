#include<iostream>

using namespace std;

int main(){
	int usage;
	double total = 0;	//bill amount
	cin>>usage;
	
	if(usage > 250){
		total = total + (usage-250)*1.5;
		usage = 250;
	}
	if(usage >150){
		total += (usage-150)*1.2;
		usage = 150;
	}
	if(usage > 50){
		total += (usage-50)*0.75;
		usage = 50;
	}
	total += usage	*0.5;
	
	total = total*1.2;
	
	cout<<"Total "<<total<<"$";
	
	return 0;
}
