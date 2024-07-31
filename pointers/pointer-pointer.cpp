//pointer to pointer 
//This pointer variable stores the address of another pointer variable
// to do this the syntax is int **c;
int a=4;
int *b=&a;
int **c= &b;
cout<<*c;  //prints the address of b  //derefferencing one time 
cout<<**c; //prints the value of b    //derefferencing two time
