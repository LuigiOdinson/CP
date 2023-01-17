#include <iostream>                                
using namespace std;

main() {
	int nums[10],i,max,min,sum;
	double M;
	max=nums[0];
	min=nums[10];
	
	for(i=0;i<10;i++){
		cin>>nums[i];
	}
	for(i=0;i<10;i++){
		if(nums[i]>max){
			max=nums[i];
		}
	}
	for(i=10;i>0;i--){
		if(nums[i]<min){
			min=nums[i];
		}
	}
	sum=max+min;
	M=sum/2.0;
	cout<<endl<<M;
}
