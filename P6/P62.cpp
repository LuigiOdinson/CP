#include <iostream>
using namespace std;

//while example 2

 main() {
	int n,s;
	
	cout<<"please enter a number: ";
	cin>>n;
	s=0;
	
	while(n>0){
		s=s+n%10;
		n=n/10;
	}
	cout<<s;
}
