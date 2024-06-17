#include<iostream>
using namespace std;
template<class T>
T find_max(T num1,T num2,T num3){
    return max(max(num1,num2),num3);
}
int main(){
    int number1=34;
    int number2=85;
    int number3=47;
    int largest=find_max(number1,number2,number3);
    cout<<"the largest number is :"<<largest;
    return 0;
}