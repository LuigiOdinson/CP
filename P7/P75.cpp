#include <iostream>                                  
using namespace std;

//P75 Romina Minaji

main() {
	int i,j,n,s=0;
	cout<<"Enter a number bigger than one: ";
	cin>>n;
	for(i=1;i<n;i++){
		int c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c++;
			}	
		}
		if(c==2){
			s+=i;
		}
	}
	cout<<s;
	
}

