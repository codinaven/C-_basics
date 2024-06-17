#include<iostream>
#include<string>
using namespace std;
int main(){
string s1;
string s2("New");
string s3("Delhi");
s1=s2;
cout<<"s1"<<s1<<endl;
cin>>s1;
cout<<"S1="<<s1<<endl;
string s4(s1);
cout<<"s4"<<s4<<endl;
cout<<"enter a string"<<endl;
cin>> s4;
cout<<"now s4 is equal to "<<s4<<endl;
s1=s2+s3;
cout<<"S1 finally contains "<<s1<<endl;
return 0;
}