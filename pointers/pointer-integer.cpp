// a pointer is a variable used to store address of other variables value which can be present anywhere in the memory
// int *a  --> declaration of a pointer variable, points to an integer.
// a = &b  --> & means the address of the value b
// the & operator is used to get the address of b

#include<iostream>
using namespace std;
int main(){
	int a=8;  // initialized a int variable
	// int *b;  this is a bad practice as it points to some random address in the pc memory which can be dangerous to access 
     int *b=0;   // null pointer indicates the pointer b is not pointing to any valid memory address  
	// it is a common way to represent that a pointer is not currently assigned to any valid object or memory location
	
	b= &a;    // stores the address of a
	cout<<b;        // gives the address of a
	cout<<endl<<&a; // gives the address of a
	cout<<endl<<*b; // gives the value of a  This is known as dereferencing
	// we have seen how to access the variablw a using pointer *b
	// now lets modify the variable a using *b
	*b=20;
	cout<<a<<endl<<*b<<endl;  // gives 20
    cout<<"increment *b"<<++(*b);
	b++;
	cout<<endl<<b;   // previous address + 4byte
	// now the value a will be stored in the new address
	//cout<<endl<<"*b or a is incremented by 1 "<<(*b)++;
	
	//array as pointer-->
	int arr[]{3,5,7};
	// this arr variable points to the address of first value
	// the name of the array acts as a pointer to the first element of the array.
	// i.e arr is a pointer
	cout<<endl<<"address of arr"<<arr;  // it gives the address of arr
	// lets make a pointer
	int *arrptr=arr; //we dont to use &arr as arr is already pointing the elements
	cout<<endl<<arrptr;  // this prints the address of the arr
	cout<<endl<<*arrptr;  // this prints the arr[0] by default
	

}
