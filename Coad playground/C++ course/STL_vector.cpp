#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    cout << "initial size = " << v.size() << endl;
    // putting values into the vector
    int x;
    cout << "enter five intege values :";
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "size ofter adding 5 values :";
    cout << v.size() << endl;
    // display the content
    cout << "current content:" << endl;
    display(v);
    // add one more value
    v.push_back(6.6);
    // display size of the contents
    cout << "\nsize="<<v.size()<<endl;
    //content now 
    display(v);
    //for increting element we made iterator 
    vector<int>::iterator itr=v.begin();
    itr=itr+3;
    v.insert(itr,1,9);
    display(v);
    //for removing we use erase 
    
    
}
