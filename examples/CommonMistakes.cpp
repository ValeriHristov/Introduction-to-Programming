// Here are some mistakes you may make.

#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num % 2 == 0); // Putting a semicolon after an if statement makes it work as if it always true
	{
		cout << "Is your number really even?" << endl; // this code will always execute
	}

	if (num = 1) // Using "=" instead of "==" is a common error. When comparing agains a constant, it may be safer to use (1 == num)
	{
		cout << "Now you accidentally assigned a new value to your num!" << endl;
	}

	cout << num << endl;// prints 1, no matter what was the user value



	float a = 1.3;
	float b = 0.3;
	float c = a - b;
	cout.precision(7); // This is some magic code, which makes the output to the console more precise.
	if (c == 1) // Will this ever be true?  
	{
		cout << "The computer is very precise with floating point operations!" << endl;
	}
	else
	{
		cout << "The actual value of c is " << c << endl;
	}
	// How it should be done:
	float epsilon = 0.00001; // If the "distance" between two numbers is less than epsilon, we assume they are equal
	if (abs(c - 1) < epsilon)
	{
		cout << "Now it should work!" << endl;
		cout << "The distance between c and 1 is " << abs(c - 1) << " which is less than our epsilon!" << endl;
	}
	return 0;
}
