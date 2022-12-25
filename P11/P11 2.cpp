#include <iostream>
using namespace std; 

int pow(int a,int b){
	if(b==0){
		return 1;
	}
	else if(b>0){
		return a*pow(a,b-1);
	}
}

main(){
	int x,y;
	cin>>x>>y;
	cout<<pow(x,y);
}

