#include<iostream>
using namespace std;

int main(){
    //whay us a pointer ----->data type which hold the address of otherdata types
int a=3;

int* b=&a;

//&----> Address of operator
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;



// * ---->(value at) dereference operator 
cout<<"The value at address b is "<<*b<<endl;

//pointer to pointer 
int** c=&b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the value of c is "<<**c<<endl;
    return 0;
}