//Check wheather the num is positive or not
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number to check is it positive or not: ";
	int num;
	cin >> num;
	if (num > 0)
		cout << "The entered number is positive";
	else
		cout << "The number isn't positive";
	return 0;
}