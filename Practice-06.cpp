//Check Driving Eligibility
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your age : ";
	float age;
	cin >> age;
	if (age > 18)
		cout << "You are eligibile";
	else
		cout << "You are not eligibile";
	return 0;
}
