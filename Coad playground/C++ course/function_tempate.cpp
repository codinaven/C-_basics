#include<iostream>
using namespace std;

template<class T>
void mySwap(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

void show(int a, int b) {
    cout << "Value of a and b before swap: " << a << " " << b << endl;
    mySwap(a, b); // Use your custom swap function
    cout << "Value of a and b after swap: " << a << " " << b << endl;
}

int main() {
    show(200, 100);
    return 0;
}
