#include<iostream>
using namespace std;

class animal
{
    private:
         char breed,colour;
    public:
        int hight;
    void setdata(char breed1, char colour1);
    void getdata(){
        cout<<"the breed of animal is "<<breed<<endl;
        cout<<"the colour of animal is "<<colour<<endl; 
        cout<<"the hight of animal is "<<hight<<endl; 
    }      
};
void animal :: setdata(char breed1,char colour1){
    breed=breed1;
    colour=colour1;
}
int main(){
    animal dog;
    dog.setdata('g','B');
    dog.hight=8;
    dog.getdata();
    return 0;

}