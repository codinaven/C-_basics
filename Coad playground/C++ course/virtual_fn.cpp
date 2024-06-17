#include <iostream>
using namespace std;
int main()
{
    int subjects;
    int makes;
    int sum=0;
    cout<<"enter no of subjects"<<endl;
    cin >> subjects;
    for (int i = 0; i <subjects; i++)
    {
        cout<<"enter the marks of the subjects"<<endl;
        cin >> makes;
        sum+=makes;
    }
        

    float average=sum/2;
    cout<<"average of the makes is ";
    cout<<average;
    

    return 0;
}
