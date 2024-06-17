#include<iostream>

using namespace std;
int c=45;
int main(){
//int a,b,c;
//cout<<"enter the value of a "<<endl;
//cin>>a;
//cout<<"enter the value of b "<<endl;
//cin>>b;
//cout<<"the sum is "<<a+b<<endl;
//cout<<"the global c is "<<::c<<endl;
//::-->> this oprator is used to show or to print the global value of c as we use this in above line.this is also known as scope resulation oprator
float d=34.45;
long double e=34.45;

 
//******Refrence variable*********************
//Anshu--->>>Anku--->>Ankit--->>Lolcoder
float x=765;
float & y = x;
cout<<y<<endl;
cout<<x<<endl;

//*******Typecasting variable**************
float b=47.84;
cout<<" the value of b is  "<<(int)b<<endl;

























return 0;

}