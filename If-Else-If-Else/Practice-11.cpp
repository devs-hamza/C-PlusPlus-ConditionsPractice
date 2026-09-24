//Check Whether Tax is Applicable
#include <iostream>
using namespace std;
int main()
{
	cout << "Tax will be applied if salary is above 60,000\nEnter your salary : ";
	int salary;
	cin >> salary;
	if (salary > 60000)
		cout << "Tax applicable";
	else if (salary < 60000)
		cout << "Tax ani't applicable";
	else
		cout << "Error";
	return 0;
}