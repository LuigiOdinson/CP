#include <iostream>
using namespace std;

//Romina Mianji 

int main() {
	int x,y,z;
	float m,s;
	cin>>x>>y>>z;
	s=(x-y)*(x+z);
	m=(((x+y+z)*(x+y+z))+1);
	cout<<s/m;
}
