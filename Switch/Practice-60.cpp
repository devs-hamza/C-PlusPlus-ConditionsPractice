// ATM Menu System
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 50000, amount;

    cout << "===== ATM MENU =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "Your balance = Rs. " << balance;
        break;
    case 2:
        cout << "Enter deposit amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully\n";
        cout << "New balance = Rs. " << balance;
        break;
    case 3:
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;

            cout << "Please collect your cash\n";
            cout << "Remaining balance = Rs. " << balance;
        }
        else
        {
            cout << "Insufficient balance";
        }
        break;
    case 4:
        cout << "Thank you for using the ATM";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}