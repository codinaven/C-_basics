#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 1)
            throw x;
        else if (x == 0)
            throw 'x';
        else if (x == -1)
            throw 1.0;
        cout << "end of try block" << endl;
    }
    catch (...)
    {
        cout << "caught a exception " << endl;
    }
    
}
int main()
{
    cout << "testing multiple catches " << endl;
    test(1);
    test(0);
    test(-1);
    test(8);
    test(84);
    return 0;
}