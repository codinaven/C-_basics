#include <iostream>
using namespace std;
class Bank

{
private:
    int account_no;
    string depositer;

public:
    Bank(int x, const string &y)
    {
        account_no = x;
        depositer = y;
        cout << "the account no of the depositer is :" << x << endl;
        cout << " depositer name :" << y << endl;
    }
};
class ammount
{
protected:
    int inamount;
    char acctype;

public:
    ammount(int a, char b) : inamount(a), acctype(b)
    {
    }
    void displayammount(void)
    {
        cout << "the total ammount" << inamount << endl;
        cout << "the account type " << acctype << endl;
    }
};
class final_ammount : public ammount
{
private:
    int ammount_withdraw;
    int ammount_left;

public:
    final_ammount() : ammount(0, 'S'), ammount_withdraw(0), ammount_left(0)
    {
    }
    void getdata(int p, int q)
    {
        ammount_withdraw = p;
        ammount_left = q;
    }
    int calculate()
    {
        ammount_left = inamount - ammount_withdraw;
    }
};

int main()
{
    Bank Bankholder(9857, "anshu");

    ammount money = ammount(100, 's');

    money.displayammount();

    final_ammount rupees;

    // Assuming you want to call the getdata and calculate functions
    rupees.getdata(50, 0); // Example withdrawal of 50, initial amount is 0
    int remainingAmount = rupees.calculate();

    cout << "Remaining amount after withdrawal: " << remainingAmount << endl;

    return 0;
}