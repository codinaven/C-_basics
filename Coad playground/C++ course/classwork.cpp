#include <iostream>
using namespace std;
class Student
{
private:
    int roll_number;

public:
    void get_data(int);
    void put_data(void);
};
void Student::get_data(int a)
{
    roll_number = a;
}
void Student::put_data()
{
    cout << "the roll number of student is:" << roll_number << endl;
}
class Test : public Student
{
protected:
    float sub1;
    float sub2;

public:
    void get_score(float, float);
    void put_score(void);
};
void Test::get_score(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void Test::put_score()
{
    cout << "the score of sub1" << sub1 << endl;
    cout << "the score of sub2" << sub2 << endl;
}
class result : public Test
{
    float total;

public:
    void display(void);
};
void result::display()
{
    total = sub1 + sub2;
    put_data();
    put_score();
    cout << "Total marks=" << total;
}
int main()
{
    result student1;
    student1.put_data();
    student1.put_score();
    student1.display();
    return 0;
}
