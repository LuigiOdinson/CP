#include <iostream>
using namespace std;

//for example 4

 main() {
	int n,i;
	cout<<"please enter a number: ";
	cin>>n;
	
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			cout<<i<<endl;
		}
	}
}
/* note: i think the for loop should be (i=1;i<=n;i++)
1 and the number itself counts too*/
