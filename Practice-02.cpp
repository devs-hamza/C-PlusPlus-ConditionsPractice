//Check wheather the number is negative or not
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number to check is it negative or not: ";
	int num;
	cin >> num;
	if (num < 0)
		cout << "The entered number is negative";
	else
		cout << "The number isn't negative";
	return 0;
}