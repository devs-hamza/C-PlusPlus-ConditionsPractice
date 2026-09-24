//Find Greater of Two Numbers
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter 1st number : ";
	int num;
	cin >> num;
	cout << "Enter 2nd number : ";
	int num1;
	cin >> num1;
	if (num > num1)
		cout << "The greater num is : " << num;
	else if (num1 > num)
		cout << "The greater num is : " << num1;
	else
		cout << "Error";
	return 0;
}