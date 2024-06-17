#include<iostream>
using namespace std;
class B{
    private:
    int a;
    public:
    int b;
    void get_valueab();
    void get_valuea(void);
    void show_valuea(void);

};
class D : private B
{
int c;
public:
void mull(void);
void display(void);
};
void B :: get_valueab(){
    cout<<"The value of a and b is "<<endl;
    cin>>a>>b;
}
int B :: get_valuea()
{
return a;
}
void D::mull()
{
    get_valueab();

}
int main(){
    
    return 0;
}