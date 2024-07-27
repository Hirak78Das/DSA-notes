#include<iostream>
using namespace std;
int peak(int arr[],int length){
	int start=0;
	int end=length-1;
	while(start<end){
		int mid=start+(end-start)/2;
		if(arr[mid]<arr[mid+1]){
			start=mid+1;
		}
		else{
			end=mid;
		
		}
	}
	return start;
}
int first_index(int arr[],int target,int peak){
	int start= 0;
	int end=peak;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;

}
int second_index(int arr[],int target,int peak,int length){
        int start= peak;
        int end=length-1;
        while(start<=end){
                int mid=start+(end-start)/2;
                if(arr[mid]==target){
                        return mid;
                }
                else if(arr[mid]<target){
                        start=mid+1;
                }
                else{
                        end=mid-1;
                }
        }
	return -1;

}
int main(){
	int mountain_array[]{0,1,2,4,2,1};
	int length=sizeof(mountain_array)/sizeof(mountain_array[0]);
	int peak_index=peak(mountain_array,length);
	int target;
	cout<<"enter target: ";
	cin>>target;
	int index1=first_index(mountain_array,target,peak_index);
	int index2=second_index(mountain_array,target,peak_index,length);
	 if (index1 == -1 && index2 == -1) {
        cout << -1;
        }
	 else {
        // Return the minimum index
        if (index1 == -1) {
            cout << index2;
        }
       	else if (index2 == -1) {
            cout << index1;
        }
       	else {
            cout << (index1 < index2 ? index1 : index2);
        }
    }

	return 0;
}	
