#include <iostream>   
#include <math.h>                               
using namespace std;

//P75 Romina Minaji

main() {
	int i,j,n,s=0;
	cout<<"Enter a number bigger than one: ";
	cin>>n;
	for(i=1;i<n;i++){
		int n=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				n++;
			}	
		}
		if(n==2){
			s+=i;
		}
	}
	cout<<s;
	
}

