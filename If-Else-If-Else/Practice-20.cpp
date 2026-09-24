//Classify Number According to Its Range
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the positive number(1-100): ";
	int num;
	cin >> num;
	if ((num >= 1) && (num <= 20))
		cout << "Number is between 1 and 20";
	else if ((num >= 21) && (num <= 40))
		cout << "Number is between 21 and 40";
	else if ((num >= 41) && (num <= 60))
		cout << "Number is between 41 and 60";
	else if ((num >= 61) && (num <= 80))
		cout << "Number is between 61 and 80";
	else if ((num >= 81) && (num <= 100))
		cout << "Number is between 81 and 100";
	else
		cout << "Error";
	return 0;
}