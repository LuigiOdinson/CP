#include <iostream>                               
using namespace std;

main() {
	int n,i,j,temp;
	int nums[]={3,6,8,11,20,32,38,56,60};
	cin>>n;
	nums[9]=n;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
	}
	cout<<"the arranged array:"<<endl;
	for(i=0;i<=9;i++){
		cout<<nums[i]<<" ";
	}
}


