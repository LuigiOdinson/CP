#include <iostream>
using namespace std;

//for example 5

 main() {
	int num1,num2,i,GCD;
	cout<<"please enter two integer values: ";
	cin>>num1>>num2;
	
	for(i=1;i<=num1&&i<=num2;i++){
		if(num1%i==0&&num2%i==0){
			GCD=i;
		}
	}
	cout<<"GCD is "<<GCD;
}
