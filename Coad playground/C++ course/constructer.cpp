// constructer in drive class
#include <iostream>
using namespace std;
class alpha
{
    int x;

public:
    alpha(int i)
    {
        x=i;
        cout << "alpha initalise" << endl;
    }
    void show_x(void)
    {
        cout << "the value of x is : " << x << endl;
    }
};

class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "beta initalise" << endl;
    }
    void show_y(void)
    {
        cout << "the value of y is:" << y << endl;
    }
};
class gamma : public alpha, public beta
{
    int m, n;

public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "gamma initallise" << endl;
    }
    void show_mn(void)
    {
        cout << "m=" << m << endl
             << "n=" << n << endl;
    }
};
int main()
{
    gamma g(5, 78.0, 65, 7);
    cout << endl;
    g.show_mn();
    g.show_x();
    g.show_y();
    
    return 0;
}