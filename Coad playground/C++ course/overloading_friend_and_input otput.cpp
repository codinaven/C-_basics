#include <iostream>
using namespace std;
const int size = 3;
class vector
{
    int v[size];

public:
    vector();
    vector(int *x);
    friend vector operator*(int a, vector b);
    friend vector operator*(vector b, int a);
    friend iostream &operator>>(iostream &, vector &);
    friend iostream &operator<<(ostream &, vector &);
};
vector::vector()
{
    for (int i = 0; i < size; i++)
        v[i] = 0;
}
vector::vector(int *x)
{
    for (int i = 0; i < size; i++)
        v[i] = x[i];
}
vector operator>>(iostream &din, vector &b)
