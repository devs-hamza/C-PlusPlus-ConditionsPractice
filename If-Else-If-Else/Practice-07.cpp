//Check Pass Status
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your percentage: ";
	float per;
	cin >> per;
	if (per >= 40)
		cout << "You are pass";
	else if (per < 40)
		cout << "You are fail";
	else
		cout << "Error";
	return 0;
}