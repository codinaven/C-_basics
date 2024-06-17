#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class error
{
    int err_code;
    char *err_desc;

public:
    error(int c, char *d)
    {
        err_code = c;
        err_desc = new char[strlen(d)];
        strcpy(err_desc, d);
    }
    void error_display(void)
    {
        cout << endl
             << err_code << endl
             << err_desc << endl;
    }
};

int main()
{
    try
    {
        cout<<"press any key to throw a test exception "<<endl;
        getch();
            throw error(99,"Test Exception");
    }

    return 0;
}