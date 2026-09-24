//Classify Person According to Age
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter age: ";
	int age;
	cin >> age;
	if ((age > 0) && (age <= 10))
		cout << "Child";
	else if ((age >= 11) && (age <= 19))
		cout << "Teenage";
	else if ((age >= 20) && (age <= 59))
		cout << "Adult";
	else if (age >= 60)
		cout << "Senior";
	else
		cout << "Error";
	return 0;

}