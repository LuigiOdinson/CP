#include <iostream>
using namespace std;


 main() {
	int n;
	cin>>n;
	if(n<6000000){
		cout<<n;
	}
	else if(n>=6000000&&n<8000000){
		cout<<n-(n*5)/100;
	}
	else if(n>=8000000&&n<10000000){
		cout<<n-(n*10)/100;
	}
	else if(n>=10000000&&n<14000000){
		cout<<n-(n*15)/100;
	}
	else if(n>=14000000&&n<18000000){
		cout<<n-(n*20)/100;
	}
	else if(n>=18000000&&n<25000000){
		cout<<n-(n*25)/100;
	}
	else if(n>25000000){
		cout<<n-(n*35)/100;
	}
}

