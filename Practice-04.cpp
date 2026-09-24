//Check Whether a Number is Even
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter number to check is it even or not : ";
	int num;
	cin >> num;
	if (num % 2 == 0)
		cout << "It's even";
	else
		cout << "It's not even";
	return 0;
}