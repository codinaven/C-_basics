// Making bank management system
#include <iostream>
#include <conio.h>
#include <cstdlib>  // For exit()

using namespace std;

class Bank {
    char name[100], add[100];
    char y;
    int balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void Bank::open_account() {
    cout << "enter your full name" << endl;
    cin.ignore();
    cin.getline(name, 100);
    cout << "enter your address :";
    cin.ignore();
    cin.getline(add, 100);
    cout << "what type of account you want to open saving(s) or current (c) ";
    cin >> y;
    cout << "enter an amount for deposit";
    cin >> balance;
    cout << "your account is created " << endl;
}

void Bank::deposit_money() {
    int a;
    cout << "enter how much you deposit :" << endl;
    cin >> a;
    balance += a;
    cout << "total amount you deposit :" << endl << balance;
}

void Bank::display_account() {
    cout << "your full name :" << name << endl
         << "your address :" << add << endl
         << "type of account that you open :" << y << endl
         << "amount you deposit :" << balance << endl;
}

void Bank::withdraw_money() {
    int b;
    cout << "how much money you want to withdraw" << endl;
    cin >> b;
    balance = balance - b;
    cout << "your balance is " << endl << balance;
}

int main() {
    int ch;
    int x;
    Bank obj;

    do {
        cout << "1. open account" << endl;
        cout << "2. deposit money" << endl;
        cout << "3. withdraw money" << endl;
        cout << "4. display account" << endl;
        cout << "5. exit" << endl;
        cout << "select the option from above: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "open account" << endl;
                obj.open_account();
                break;
            case 2:
                cout << "deposit money" << endl;
                obj.deposit_money();
                break;
            case 3:
                cout << "withdraw money" << endl;
                obj.withdraw_money();
                break;
            case 4:
                cout << "display account" << endl;
                obj.display_account();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout << "this is not a valid option, try again" << endl;
        }

        cout << "\n do you want to select the next option? Press 'y' for yes, 'n' for no: ";
        cin >> x;

    } while (x == 'y' || x == 'Y');

    getch();
    return 0;
}

