#include <iostream>                                  
using namespace std;

//P74 Romina Minaji

main() {
	int n,b,m;
	cin>>m>>n;
	while(m!=0){
		b=n%m;
		n=m;
		m=b;
	}
	cout<<n;
}

