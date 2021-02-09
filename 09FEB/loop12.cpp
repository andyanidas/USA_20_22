#include <iostream>  
using namespace std;  
int main()  
{  
	int num,rem;
	int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;  
	cout<<"Enter a number: ";    
	cin>>num;			//12315161	1-4 2-1 3-1 4-0 5-0

	for(;num != 0; num/=10){
		cout<<"Inside for loop";	//debugging
		rem = num%10;
		switch(rem){				//if(rem == 1) cout"one"
			case 0:
				zero++;
				break;
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
			default:
				break;
		}
	}
	cout<<"0 ->"<<zero<<" in this number"<<endl;
	cout<<"1 ->"<<one<<" in this number"<<endl;
	cout<<"2 ->"<<two<<" in this number"<<endl;
	cout<<"3 ->"<<three<<" in this number"<<endl;
	cout<<"4 ->"<<four<<" in this number"<<endl;
	cout<<"5 ->"<<five<<" in this number"<<endl;
	cout<<"6 ->"<<six<<" in this number"<<endl;
	cout<<"7 ->"<<seven<<" in this number"<<endl;
	cout<<"8 ->"<<eight<<" in this number"<<endl;
	cout<<"9 ->"<<nine<<" in this number"<<endl;
	
	   
return 0;  
}  
