#include <iostream>                                  
using namespace std;

//P73 Romina Minaji

main() {
	int n,i,m=0;
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			m+=i;
		}
	}
	cout<<m;
}

