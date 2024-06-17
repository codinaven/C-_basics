#include <iostream>
using namespace std;
class Bankdeposit
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void showvalue();
};
Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = principal * (1 + interestrate);
    }
}
Bankdeposit::Bankdeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    interestrate = float(R) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = principal * (1 + interestrate);
    }
}
void Bankdeposit::showvalue()
{
    cout<<endl<<"principal value was"<<principal<<endl
    <<"return value after "<<year<<endl
    <<"is"<<returnvalue<<endl;
}
int main()
{ 
    Bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p,y,r"<<endl;
    cin>>p>>y>>r;
    bd1=Bankdeposit(p,y,r);
    bd1.showvalue();
    
    cout<<"enter the value of p,y,r"<<endl;
    cin>>p>>y>>R;
    bd1=Bankdeposit(p,y,R);
    bd1.showvalue();
   
    return 0;
}