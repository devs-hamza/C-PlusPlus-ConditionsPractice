//Check Divisibility by 5
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter num to check if it's divisible by 5 or not : ";
	int num;
	cin >> num;
	if (num % 5 == 0)
		cout << "Number is divisible";
	else
		cout << "Not divisible";
	return 0;
}