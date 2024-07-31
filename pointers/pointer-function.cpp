// pointer to function
// call by value 
// call by reference or address

#include<iostream>
using namespace std;

void swap(int i,int j){
	int temp=i;
	i=j;
	j=temp;
}
int main(){
	int a=7;
	int b=8;
	swap(a,b);   // we passed the values of a and b, i.e. the value of a and b will not swap in the main function
	cout<<a<<b;  // not swaped
}



// to swap the values of a and b globally we need to send the address of a and b while calling the function
// we know if we send the address, and if the value is modified using pointers than the value will also be change in the memory

#include<iostream>
using namespace std;

void swap(int *i,int *j){
	int temp=*i;
	*i=*j;
	*j=temp;
}
int main(){
	int a=6;
	int b=9;
	swap(&a,&b);  //we are sending the address, hence the value will be swapped globally
	cout<<a<<b;
}
