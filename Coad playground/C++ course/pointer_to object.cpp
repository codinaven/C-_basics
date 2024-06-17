#include <iostream>
using namespace std;
class iteam
{
    int a, b;

public:
    void getdata(int iteam, int code)
    {
        a = iteam;
        b = code;
    }
    void show(void)
    {
        cout << "code:" << a << endl;
        cout << "iteam:" << b << endl;
    }
};
const int size =2;

int main()
{
    iteam *p=new iteam[2];
    iteam *d=p;
    int x,i;
    float y;


    return 0;
}