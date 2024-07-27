

#include<iostream>
using namespace std;
int ceiling(int arr[],int target,int length){
	//ceiling is number>=target
	if(target>arr[length-1]){
		return -1;
	}
	int start=0;
	int end=length-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(target==arr[mid]){
			return arr[mid];
		}
		else if(target<arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return arr[start];
}
int main(){
	int array[]{3,5,8,10,14,19,22};
        int target;
        cin>>target;
        int length=sizeof(array)/sizeof(array[0]);
	cout<<ceiling(array,target,length);
	return 0;
}

   	

