#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class Anshu
{
public:
    T1 data1;
    T2 data2;
    Anshu(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void display()
    {
        cout << "the value of data1 is " << data1 << endl;
        cout << "the value of data2 is " << data2 << endl;
    }
};
int main()
{
    Anshu<> h(6,9.08);
    h.display();

    return 0;
}