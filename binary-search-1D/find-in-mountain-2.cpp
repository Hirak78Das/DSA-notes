#include<iostream>
using namespace std;
int indexpeak(int array[],int length){
	int start=0;
	int end=length-1;
	while(start<end){
		int mid=start+(end-start)/2;
		if(array[mid]<array[mid+1]){
			start=mid+1;
		}
		else{
			end=mid;
		}
	}
	return end;
}
// we need to check if target is in both part of array
int check(int ar[],int target,int length,int peak){
	if(ar[peak]==target){
		return peak;
	}
	else{
		int start=0;
		int end=peak-1;
		while(start<=end){
			int mid=start+(end-start)/2;
			if(target==ar[mid]){
				return mid;
			}
			else if(target<ar[mid]){
				end=mid-1;
			}
			else{
				start=mid+1;
			}
		}
		start=peak+1;
		end=length-1;
		while(start<=end){
                        int mid=start+(end-start)/2;
                        if(target==ar[mid]){
                                return mid;
                        }
                        else if(target<ar[mid]){
                                end=mid-1;
                        }
                        else{
                                start=mid+1;
                        }
                }
		return -1;
	}
}
int main(){
	int arr[]{0,1,2,4,2,1};
	int length=sizeof(arr)/sizeof(arr[0]);
	int target;
	cin>>target;
	int peak_index=indexpeak(arr,length);
	cout<<check(arr,target,length,peak_index);
	return 0;

}
