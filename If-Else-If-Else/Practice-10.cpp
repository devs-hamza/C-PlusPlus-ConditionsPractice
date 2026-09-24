//Check for Fever
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your temprature in F : ";
	int tem;
	cin >> tem;
	if (tem > 100)
		cout << "You have fever";
	else if (tem < 100)
		cout << "You don't have fever";
	else
		cout << "Error";
	return 0;

}