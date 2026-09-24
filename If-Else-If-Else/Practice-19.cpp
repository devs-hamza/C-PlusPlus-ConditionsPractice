//Classify Temperature
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter temprature : ";
	int tem;
	cin >> tem;
	if (tem < 10)
		cout << "Cold";
	else if ((tem >= 11) && (tem <= 25))
		cout << "Normal";
	else if ((tem >= 26) && (tem <= 35))
		cout << "Warm";
	else if (tem > 35)
		cout << "Hot";
	else
		cout << "Error";
	return 0;
	
		 
}