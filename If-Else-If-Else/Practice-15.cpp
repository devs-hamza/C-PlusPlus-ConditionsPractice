//Check Whether Character is a Digit
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character or digit: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9')
    {
        cout << "It is a number";
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << "It is a character";
    }
    else
    {
        cout << "Special character";
    }
    return 0;
}