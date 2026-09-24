//Display Grade According to Mark
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the percentage: ";
    int per;
    cin >> per;

    if (per >= 85 && per <= 100)
        cout << "Grade A+";
    else if (per >= 80 && per <= 84)
        cout << "Grade A";
    else if (per >= 70 && per <= 79)
        cout << "Grade B";
    else if (per >= 60 && per <= 69)
        cout << "Grade C";
    else if (per >= 50 && per <= 59)
        cout << "Grade E";
    else
        cout << "Grade F";

    return 0;
}