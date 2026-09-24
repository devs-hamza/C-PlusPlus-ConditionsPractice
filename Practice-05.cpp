//Check Whether a Number is Odd
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number to check is it odd or not : ";
	int num;
	cin >> num;
	if (num % 2 != 0)
		cout << "The number is odd";
	else
		cout << "The number isn't odd";
	return 0;
}