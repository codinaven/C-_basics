#include <iostream>
using namespace std;
class Distance
{
    int m;
    int km;

public:
    void setdata(int &meters) ;
    void todaygoal();
    void displaydata(void);
};

void Distance::todaygoal()
{
    const int todaygoal=100;
    if (m < todaygoal)
    {
        cout << "your daily task is not completed" << endl;
    }
    else if (m > todaygoal)
    {
        cout << "Congratulations! your daily task is completed " << endl;
    }
}
void Distance::displaydata()
{
    cout << "Distance travell by you in meters" << m << endl;
    cout << "Distance travell by you in kilometers" << (float)m / 1000 << "km" << endl;
}

int main()
{
        Distance runner;
        int meters;  // Create a variable to store the distance
    cout << "How much did you travel in a day (in meters): ";
    cin >> meters;
    runner.setdata(meters);
    runner.todaygoal();
    runner.displaydata();
    return 0;
}