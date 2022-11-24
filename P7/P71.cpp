#include <iostream>                                  
using namespace std;

//P71 Romina Mianji

main() {
	int n,m,i;
	int result=1;
	cin>>m>>n;
	
	for(i=1;i<=n;i++){
		result*=m;
	}
	cout<<result;
}

