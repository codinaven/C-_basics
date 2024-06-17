#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int i = 0, int r = 0)
    {
        real = r;
        imag = i;
    }
    void print() { cout << real << " +i " << imag; }
    friend Complex operator+(Complex const &c1, Complex const &c2);
};
Complex operator+(Complex const &c1, Complex const &c2)
{
    return Complex(c1.real + c2.real, c2.imag + c2.imag);
}
int main()
{
    Complex c1(10, 5), c2(7, 8);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}