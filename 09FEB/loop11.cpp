#include <iostream>  
using namespace std;  
int main()  
{  
	int n, reverse=0, rem,temp;    
	cout<<"Enter a number: ";    
	cin>>n;
	temp = n;
	/*  
	while(n!=0){    
	    rem=n%10;      
	    reverse=reverse*10+rem;    
	    n/=10;    
	} */   
	
	for(;n!=0;n/=10){
		rem=n%10;      
	    reverse=reverse*10+rem;   
	}
	
	if(temp==reverse){
		cout<<temp<<" it is palindrom.";
	}else{
		cout<<temp<<" its not palindrom.";
	}
	
	   
return 0;  
}  
