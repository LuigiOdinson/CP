#include <iostream>                               
using namespace std;

main() {
	int i,fib,a=1,b=1;
	int fibNums[10];
	for(i=0;i<10;i++){
		fibNums[i]=a;
		fib=a+b;
		a=b;
		b=fib;
	} 
	for(i=0;i<10;i++){
		cout<<fibNums[i]<<" ";
	}
}


