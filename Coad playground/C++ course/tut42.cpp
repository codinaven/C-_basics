#include <iostream>
using namespace std;
class calculator
{
private:
    int x;
    int y;

public:
int num1;
int num2;
    void getdata()
    {
        x = num1;
        y = num2;
    }

    void setdata();
};
void calculator::setdata()
{
    cout << "num1" << endl;
    cin >> x;
    cout << "num2" << endl;
    cin >> y;
}
class calculate : public calculator
{
public:
    void multiply()
    {
        cout << num1*num2;
    }
    int add();
    int subtract();
    int division();
};
int main()
{
    calculate X1;
    X1.setdata();
    X1.multiply();

    return 0;
}