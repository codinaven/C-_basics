#include <iostream>
using namespace std;
class Account
{
protected:
    int Acc_number;
    int Amount;

public:
    void get_number(int, int);
    void put_number(void);
};
void Account::get_number(int a, int b)
{
    a = Acc_number;
    b = Amount;
}
void Account ::put_number()
{
    cout << "Enter your account no" << Acc_number << endl;

    cout << "Money you want to submit " << Amount << endl;
}
class Sav_account : public Account
{
private:
    int Intrest;

public:
    Sav_account()
    {
        Intrest = 0;
    }
    void get_data(float);
    void Int_value();
    void moneyint(int b)
    {
        cout << "money you get after 1 year :" << b * Intrest / 100 << endl;
    }
};
void Sav_account ::get_data(float c)
{
    Intrest = c;
}
void Sav_account ::Int_value()
{
    cout << "Intrest per year on your money is:" << Intrest << "%" << endl;
}
class fix_deposit : public Sav_account
{
public:
    void get_ammount(int);
    void value_ammount();
    void time_interval();
};
void fix_deposit::get_ammount(int i)
{
    Amount = i;
}
void fix_deposit::value_ammount()
{
    cout << "Fixed deposit amount: " << Amount << endl;
}

void fix_deposit::time_interval()
{
    cout << "Time interval not specified in your code." << endl;
}

int main()
{
    Account person1;
    person1.get_number(675, 8000);
    person1.put_number();

    return 0;
}