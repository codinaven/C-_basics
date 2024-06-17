// Making clock in c++
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int h, m, s, a, err;
    /*Here, variables h, m, and s represent hours, minutes, and seconds, respectively.
     a and err are used as flags to control the program flow.*/
    err = a = 0;
    while (err == 0)
    {
        cout << "enter hour : " << endl;
        cin >> h;
        cout << "enter minutes : " << endl;
        cin >> m;
        cout << "enter seconds : " << endl;
        cin >> s;
        if (h < 24 && m < 60 && s < 60)
            err++;
        else
            system("cls");
            /*This loop allows the user to input the initial time.
             It checks if the entered time is valid (hours < 24, minutes < 60, seconds < 60).
             If not, it clears the console and prompts the user to enter the time again.*/
    }
    while (a == 0)
    {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;
        Sleep(1000);
        s++;
        if (s > 59)
        {
            s = 0;
            m++;
        }
        if (m >59)
        {
            m = 0;
            h++;
        }
        if(h>24){
            h=0;

        }
        /*Once the user provides valid input, 
        the program enters a loop to continuously display the time and update it every second.*/
    }
    return 0;
}
/*system("cls") clears the console screen.
The current time is displayed in the format hh:mm:ss.
The Sleep(1000) function pauses the program for 1000 milliseconds (1 second).
The time is then updated, incrementing seconds, minutes, and hours as necessary.
 If any value exceeds its limit, it wraps around to zero*/