#include <iostream>                                
using namespace std;

main() {
	int n[5],m[5];
	int i,temp;
	cout<<"Enter 5 numbers for n: "<<endl;
	for(i=1;i<6;i++){
		cin>>n[i];
	}
	cout<<"Enter 5 numbers for m: "<<endl;
	for(i=1;i<6;i++){
		cin>>m[i];
	}
	for(i=1;i<6;i++){
		temp=n[i];
		n[i]=m[i];
		m[i]=temp;
	}
	for(i=1;i<6;i++){
		cout<<n[i];
	}
}

