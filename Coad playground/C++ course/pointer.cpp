#include <iostream>
using namespace std;
int main()
{
    int number[50], *ptre;
    int n, i;
    cout <<"enter the count" << endl;
    cin >> n;
    cout << "enter the number one by one" << endl;
    for (i = 0; i < n; i++)
        cin >> number[i];
    /*assign the base address of number to ptr and initialise the sum to zero*/
    ptre = number;
    int sum = 0;
    /*check out even and input and sum up them */
    for (i = 0; i < n; i++)
    {
        if (*ptre % 2 == 0)
            sum = sum + *ptre;
        ptre++;
    }
    cout << "sum of the even numbers:" << endl;
}