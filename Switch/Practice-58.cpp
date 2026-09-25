// Unit Conversion System
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double value;

    cout << "===== Unit Conversion =====\n";
    cout << "1. Kilometers to Meters\n";
    cout << "2. Meters to Centimeters\n";
    cout << "3. Kilograms to Grams\n";
    cout << "4. Hours to Minutes";

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch(choice)
    {
    case 1:
        cout << "Meters = " << value * 1000;
        break;
    case 2:
        cout << "Centimeters = " << value * 100;
        break;
    case 3:
        cout << "Grams = " << value * 1000;
        break;
    case 4:
        cout << "Minutes = " << value * 60;
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}