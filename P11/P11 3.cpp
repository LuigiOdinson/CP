#include <iostream>
using namespace std; 

int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	else if(a%b!=0){
		return gcd(b,a%b);
	}
}

main(){
	int x,y;
	cin>>x>>y;
	cout<<gcd(x,y);
}

