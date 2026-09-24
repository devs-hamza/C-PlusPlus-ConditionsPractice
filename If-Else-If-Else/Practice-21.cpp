//Display Grade According to number
#include <iostream>
using namespace std;
int main()
{
	float num1, num2, per;
	cout << "Enter the total marks of student : ";
	cin >> num1;
	cout << "Enter the obtained marks of student : ";
	cin >> num2;
	per = (num2 / num1) * 100;
    cout << "Percentage is : " << per << '\n';
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