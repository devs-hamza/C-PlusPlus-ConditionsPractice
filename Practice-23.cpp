// Display Season According to Month
#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "Enter month number: ";
    cin >> month;

    if (month == 12 || month == 1 || month == 2)
        cout << "Winter";
    else if (month >= 3 && month <= 5)
        cout << "Spring";
    else if (month >= 6 && month <= 8)
        cout << "Summer";
    else if (month >= 9 && month <= 11)
        cout << "Autumn";
    else
        cout << "Invalid month";

    return 0;
}
