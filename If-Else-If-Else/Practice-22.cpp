//Classify Person According to Height
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your height in fts: ";
	float height;
	cin >> height;

	if (height <= 5.2)
		cout << "Belove Average";
	else if ((height >= 5.3) && (height <= 5.10))
		cout << "Average height";
	else if ((height >= 5.11) && (height <= 6.2))
		cout << "Above average";
	else if ((height >= 6.3) && (height <= 6.10))
		cout << "You are lenghty buddy";
	else
		cout << "Error";
	 
	return 0;
}