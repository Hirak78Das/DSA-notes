#include<iostream>
using namespace std;

// find the greatest element in the unsorted array

void bubblesort(int arr[],int length){
	for(int i=0;i<length;i++){
		for(int j=1;j<length-i;j++){
			if(arr[j]<arr[j-1]){
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int greatest(int arr[],int length){
	int start=0;
	int end=length;
	while(start<end){
		int mid=start+(end-start)/2;
		if(arr[mid]==arr[length-1]){
			return arr[mid];
		}
		if(arr[mid+1]>arr[mid]){
			start=mid+1;
		}
	}
	return -1;

}

int main(){
	int arr[]{};
	bubblesort(arr,sizeof(arr)/sizeof(arr[0]));
	// now the array is sorted so
	// find the greatest element using binary search
	
	cout<<greatest(arr,sizeof(arr)/sizeof(arr[0]))<<endl;
	
	return 0;


}
