#include <iostream>
using namespace std;
class complex
{
private:
    float x, y;

public:
    complex() {}
    complex(float a)
    {
        x = y = a;
    }
    complex(float imag, float real)
    {
        x = real;
        y = imag;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3 = c1.x + c2.x;
    c3 = c2.y + c2.y;
    return (c3);
}
void show(complex c)
{
    cout << c.x << "+ i" << c.y << endl;
}
int main()
{
    complex A(2.3,3.5);
    complex B(5.5);
    complex C;
    C=sum(A,B);
    cout<<"A=";show(A);
    cout<<"B=";show(B);
    cout<<"C=";show(C);
}