#include<iostream>
//There are two type of header files 
//1.system header files : it come with compiler 
//2.user define header files: it is written by programmer
using namespace std;
int main(){
    int a=6,b=6;
    cout<<"opreters in c++ :";
    cout<<"following are the types of opraters"<<endl;
    //Arthmatic oprater
cout<<"this is the value of a+b:"<<a+b<<endl;
cout<<"this is the value of a-b:"<<a-b<<endl;
cout<<"this is the value of a%b:"<<a%b<<endl;
cout<<"this is the value of a/b:"<<a/b<<endl;
cout<<"this is the value of a++:"<<a++<<endl;
cout<<"this is the value of a--:"<<a--<<endl;
cout<<"this is the value of ++a:"<<++a<<endl;
cout<<"this is the value of --a:"<<--a<<endl;
//Arthmatic oprater ---> use to assigne the value to the oprator 
//example int a=9,b=9;
//char nup='h'

//comparison oprator
cout<<"Following are the comparison oprator"<<endl;
cout<<"This is the value of a==b:" <<(a==b)<<endl;
cout<<"This is the value of a<=b:" <<(a<=b)<<endl;
cout<<"This is the value of a>=b:" <<(a>=b)<<endl;
cout<<"This is the value of a!=b:" <<(a!=b)<<endl;
cout<<"This is the value of a<b:"  <<(a<b)<<endl;
cout<<"This is the value of a>b:"  <<(a>b)<<endl;
//logical opraters
cout<<"following are the logical oprator"<<endl;
cout<<"this is the value of (a==b) && (a<=b) is "<<((a==b) && (a<b))<<endl;   
cout<<"this is the value of (a==b) or (a<=b) is "<<((a==b) or (a<=b))<<endl;

//**********float,double,and long double literals************
float d=34.4F;
long double e=34.4L;
cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"the size of 34.4f is "<<sizeof(34.4)<<endl;
cout<<"the size of 34.4F is "<<sizeof(34.4)<<endl;
cout<<"the size of 34.4l is "<<sizeof(34.4)<<endl;
cout<<"the size of 34.4L is "<<sizeof(34.4)<<endl;
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;


    return 0;
}