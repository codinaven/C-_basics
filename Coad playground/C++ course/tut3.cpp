#include <iostream>
using namespace std;

class Account {
protected:
    int Acc_number;
    int Amount;

public:
    void get_number(int, int);
    void put_number(void);
};

void Account::get_number(int a, int b) {
    Acc_number = a;
    Amount = b;
}

void Account::put_number() {
    cout << "Account Number: " << Acc_number << endl;
    cout << "Balance: " << Amount << endl;
}

class Sav_account : public Account {
private:
    int Interest;

public:
    Sav_account() {
        Interest = 0;
    }

    void get_data(int);
    void Int_value();
    void moneyint() {
        cout << "Interest you get after 1 year: " << Amount * Interest / 100 << endl;
    }
};

void Sav_account::get_data(int c) {
    Interest = c;
}

void Sav_account::Int_value() {
    cout << "Interest rate per year on your money is: " << Interest << "%" << endl;
}

class Fix_deposit : public Sav_account {
public:
    void get_ammount(int);
    void value_ammount();
    void time_interval();
};

void Fix_deposit::get_ammount(int i) {
    Amount = i;
}

void Fix_deposit::value_ammount() {
    cout << "Fixed deposit amount: " << Amount << endl;
}

void Fix_deposit::time_interval() {
    cout << "Time interval not specified in your code." << endl;
}

int main() {
    Fix_deposit person1; // Create an object of the Fix_deposit class
    int accNumber, balance, interestRate;

    cout << "Enter your account number: ";
    cin >> accNumber;
    cout << "Enter the initial balance: ";
    cin >> balance;
    person1.get_number(accNumber, balance);
    person1.put_number();

    cout << "Enter the annual interest rate for the savings account: ";
    cin >> interestRate;
    person1.get_data(interestRate);
    person1.Int_value();
    person1.value_ammount();
    person1.moneyint();

    return 0;
}
