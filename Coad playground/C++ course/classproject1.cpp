#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void get_number(int);
    void put_number(void);
};
void Student::get_number(int a)
{
    roll_number = a;
}
void Student::put_number(void)
{
    cout << "Your rollnumber is " << roll_number << endl;
}
class Test : virtual public Student
{
protected:
    int sub1;
    int sub2;

public:
    void get_marks(int, int);
    void put_marks(void);
};
void Test::get_marks(int a, int b)
{
    sub1 = a;
    sub2 = b;
}
void Test::put_marks()
{
    cout << "Marks of sub1 : " << sub1;
    cout << "Marks of sub2 : " << sub2;
}
class Sports : public virtual Student
{
protected:
    float score;

public:
    void get_score(float);
    void put_score(void);
};
void Sports::get_score(float a)
{
    score = a;
}
void Sports::put_score()
{
    cout << "Marks in sports :" << score << endl;
}
class result : public Test, public Sports
{
private:
    float Total;

public:
    void display(void);
};
void result::display()
{
    Total = sub1 + sub2 + score;
    put_number();
    put_marks();
    cout << " Total score : " << Total << endl;
}
int main()
{
    result student1;
    student1.get_number(878);
    student1.put_number();
    student1.get_marks(87, 90);
    student1.put_marks();
    student1.get_score(100.0);
    student1.put_score();
    student1.display();

    return 0;
}