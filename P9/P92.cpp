#include <iostream>                               
using namespace std;

main() {
	int nums[10];
	int i,min1,min2;
	cout<<"Enter 10 numbers for the array: "<<endl;
	for(i=0;i<10;i++){
		cin>>nums[i];
	}
	if(nums[0]<nums[1]){
		min1 = nums[0];
		min2 = nums[1];	
	}
	else{
		min1 = nums[1];
		min2 = nums[0];
	}
	for(i=0;i<10;i++){
		if(nums[i]<min1){
			min2=min1;
			min1=nums[i];
		}
		if(nums[i]>min1 && nums[i]<min2){
			min2=nums[i];
		}
	}
	cout<<"second smallest number is "<<min2; 
}
