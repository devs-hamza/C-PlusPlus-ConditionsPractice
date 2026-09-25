// Restaurant Menu System
#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Restaurant Menu =====\n";
    cout << "1. Burger - Rs. 500\n";
    cout << "2. Pizza - Rs. 1200\n";
    cout << "3. Biryani - Rs. 350\n";
    cout << "4. Fries - Rs. 250";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "You selected Burger. Price = Rs. 500";
        break;
    case 2:
        cout << "You selected Pizza. Price = Rs. 1200";
        break;
    case 3:
        cout << "You selected Biryani. Price = Rs. 350";
        break;
    case 4:
        cout << "You selected Fries. Price = Rs. 250";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}