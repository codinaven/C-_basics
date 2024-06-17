#include <iostream>
using namespace std;
class greatest
{
private:
    int a = 4;
    int b = 2;
    int c = 7;

public:
    void find_greatest(void)
    {
        if(a>b){
            if(a>c){
                cout<<a;
            }
        }
        else if(b>c){
            if(b>a){
                cout<<b;
            }
        }
        else{
            cout<<c;
        }
        }
};
int main()
{
    greatest g1;
    g1.find_greatest();
    return 0;
}