#include <iostream>
#include <cstring>
using namespace std;
class String
{
    char *name;
    int length;

public:
    String()
    {
        length = 0;
        name = new char[length + 1];
    }
    String(char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void display()
    {
        
    }
};