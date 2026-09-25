//Simple Calculator Using Switch
#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	cout << "Enter number 1 :  ";
	cin >> num1;
	cout << "Enter number 2 :  ";
	cin >> num2;
	cout << "Enter oprator(+,-,/,*) :  ";
	char oprator;
	cin >> oprator;

	switch (oprator)
	{
	case '+':
	{
		float sum;
		sum = num1 + num2;
		cout << "Sum = " << sum;
	}
	break;

	case '-':
	{
		float subtraction;
		subtraction = num1 - num2;
		cout << "Subtraction = " << subtraction;
	}
	break;

	case '/':
	{
		if (num2 == 0)
			cout << "Error";
		else if (num2 != 0)
		{
			float div;
			div = num1 / num2;
			cout << "Division = " << div;
		}
		else
			cout << "Error";
	}
	break;

	case'*':
	{
		float multiply;
		multiply = num1 * num2;
		cout << "Multiplication = " << multiply;
	}
	break;
	}
	return 0;

}