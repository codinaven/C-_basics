#include<iostream>
using namespace std;
#include <cstdio>

int main() {
    // Format specifiers are used to specify the type of data to be printed
    // and how it should be formatted.
    // For example, %d is a format specifier for integers.

    int num = 42;
    printf("This is an integer: %d\n", num);

    // You can use multiple format specifiers in a single printf statement.
    double pi = 3.14159;
    printf("This is an integer: %d, and this is a float: %f\n", num, pi);

    return 0;
}
