#include<iostream>
using namespace std;
//pivot= greatest element or the element at index where the array is rotated
int find_pivot(int array[],int length){
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
	return start;
}

int check(int array[],int length,int peak_index,int target){
	int start=0;
	int end=peak_index-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(target==array[mid]){
			return mid;
		}
		else if(target>array[mid]){
			start=mid+1;
		}
		else{
			end= mid-1;
		}
	}
	start=peak_index+1;
	end=length-1;
	while(start<=end){
                int mid=start+(end-start)/2;
                if(target==array[mid]){
                        return mid;
                }
                else if(target>array[mid]){
                        start=mid+1;
                }
                else{
                        end= mid-1;
                }
        }
	return -1;
}
int main(){
	int arr[]{5, 6, 7, 1, 2, 3, 4};
	int target;
	cin>>target;
	int length=sizeof(arr)/sizeof(arr[0]);
	// first find the peak element in the rotated array
	int greatest=find_pivot(arr,length);
	//find the target in the ascending part of the rotated array
	//first check if arr[greatest]== target , if true than answer found
	if(arr[greatest] == target){
		return greatest;
	}
	// if not then check if target lies btwn o and greatest-1 index else check btwn greatest+1 and end
	cout<<check(arr,length,greatest,target);
	return 0;
	
}
