//Check Whether Number is Greater Than 100
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the number to check is it greater than 100 or not : ";
	int num;
	cin >> num;
	if (num > 100)
		cout << "It's greater than 100";
	else
		cout << "It's smaller";
	return 0;
}