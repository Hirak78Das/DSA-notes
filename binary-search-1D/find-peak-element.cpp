#include<iostream>
using namespace std;
int peak_element(int arr[],int length){
	int start=0;
	int end=length-1;
	while(start<end){
		int mid= start+(end-start)/2;
	        if(arr[mid]<arr[mid+1]){  
			start=mid+1;  //cuz the array is in ascending order
		}
		else{
			end=mid;  // end = mid cuz the peak can be either mid or less than mid
		}
	}
	return end;

}
int main(){
	int array[]{1,2,3,1};
	int length=sizeof(array)/sizeof(array[0]);
	cout<<"The peak index is : "<<peak_element(array,length)<<endl;
	return 0;

}
