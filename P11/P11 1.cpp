#include <iostream>
using namespace std; 

double pow(double a,double b){
	double r=1.0;
	for(int i=1;i<=b;i++){
		r*=a;
	}
	return r;
}

double fact(int n){
	if(n==0){
		return 1;
	}
	else if(n>0){
		return fact(n-1)*n;
	}
}
// taylor sine and cosine series into FOR LOOP:
//pow(-1.0,i) indicates the sign
//10 is the precision of the calculate
double sin(double n){
	double sin,rad;
	rad=n*3.14/180.0;
	double s=0;
	for(int i=0;i<10;i++){
		s+= pow(-1.0,i)*pow(rad,2*i+1)/fact(2*i+1);
	}
	return s;
}
double cos(double n){
	double cos,rad;
	rad=n*3.14/180.0;
	double s=0;
	for(int i=0;i<10;i++){
		s+= pow(-1.0,i)*pow(rad,2*i)/fact(2*i);
	}
	return s;
}

main(){
	double x;
	double rad,sinx,cosx,tanx;
	cin>>x;
	sinx = sin(x);
	cosx = cos(x);
	tanx=sinx/cosx;
	cout<<tanx;
}
