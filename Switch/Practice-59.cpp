// Student Information Menu
#include <iostream>
using namespace std;

int main()
{
    int choice;
    string name = "Ali";
    int rollNo = 25, marks = 85;

    cout << "===== Student Information =====\n";
    cout << "1. Display Name\n";
    cout << "2. Display Roll Number\n";
    cout << "3. Display Marks";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "Name = " << name;
        break;
    case 2:
        cout << "Roll Number = " << rollNo;
        break;
    case 3:
        cout << "Marks = " << marks;
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}