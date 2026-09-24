//Check Divisibility by 3 and 5
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter num to check if it's divisible by 5 or 3 : ";
	int num; 
	cin >> num;
	if (num % 5 == 0)
		cout << "Divisible by 5";
	else if (num % 3 == 0)
		cout << "Divisible by 3";
	else
		cout << "Not divisible";
	return 0;
}