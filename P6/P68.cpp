#include <iostream>
using namespace std;

//for example 6

 main() {
	int n,j,f;
	cout<<"please enter an integer number: ";
	cin>>n;
	f=1;
	
	for(j=2;j<=n;j++){
		f*=j;
	}
	cout<<n<<"!:"<<f;
}

