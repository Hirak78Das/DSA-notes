// matrix is sorted in a row wise and colm wise manner
// we can't apply binary search cuz the matrix is sorted in rows and cols wise

#include<iostream>
using namespace std;
int search(int matrix[][4],int target,int n){
	int r=0;
	int c=n-1;
	while(r<=n-1 && c>=0){
		if(target==matrix[r][c]){
			return 1;

		}
		else if(target>matrix[r][c]){
			r++;
		}
		else{
			c--;
		}
		
	}
	return {-1};
}
int main(){
	int arr[4][4]{{10,20,32,40},{15,22,34,44},{19,28,35,48},{25,30,39,50}};
	int row_length=sizeof(arr)/sizeof(arr[0]);
	cout<<search(arr,48,row_length)<<endl;
	return 0;
}
