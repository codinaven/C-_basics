// Throw point outside the try block
#include <iostream>
using namespace std;
void divide(int x, int y, int z)
{
    cout << "We are inside the function " << endl;
    if ((x - y) != 0) // It is OK
    {
        int R = z / (x - y);
        cout << "Result = " << R << "\n";
    }
    else // There is a problem
    {
        throw(x - y); // Throw point
    }
}
int main()
{
    try
    {
        cout << "We are inside the try block\n ";
            divide(10, 20, 30); // Invoke
        
            divide(10, 10, 20); // Invoke
       
    }
    catch (int i) // Catches the
    {
        cout << "Caught the exception \n";
    }
    return 0;
}
