/*

The code that calculates the factorial of the number entered by the user
and displays the number of last digits of this factorial that are 0.

Coder: Bar?? Somero?lu

Date: 12.11.23 / 1.30 a.m.

*/



#include <iostream>

using namespace std;

int main()
{
	int Number, Factorial = 1, Counter = 0;

	cout << "Please Enter Number: ";
	cin >> Number;

	if (Number < 0)
	{
		cout << "Your Number is Negative and There is no Factorail for Negative Numbers!" << endl;
	}

	else if (Number == 0)
	{
		cout << "0! = 1" << endl;
	}

	else
	{
		for (int i = 1; i <= Number; i++)
		{
			Factorial *= i;
		}

		cout << "Factorail is: " << Factorial << endl;

		while (Factorial % 10 == 0)
		{
			Counter++;

			Factorial = Factorial / 10; // this step is important.
		}

		cout << "Count for Zero: " << Counter << endl;
		
	}


	return 0;
}