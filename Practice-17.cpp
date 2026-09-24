//Check Whether Number is Positive, Negative or Zero
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number : ";
	int num;
	cin >> num;
	if (num > 0)
		cout << "Positive number";
	else if (num > 0)
		cout << "Negative number";
	else if (num == 0)
		cout << "It's zero";
	else
		cout << "Error";
	return 0;
}