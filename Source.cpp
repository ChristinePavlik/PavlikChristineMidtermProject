/*Christine Pavlik
Febuary 26, 2020
This program is a calculator in which you can do more basic (ex. addition and subtraction) and more advanced calculations (ex. trig and square roots).
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//cout statement lists the options the user can choose

	cout << "This is a calculation program.\nType in 1 for addition.\n" <<
		"Type in 2 for subtraction.\nType in 3 for multiplucation.\nType in 4 for division.\nType in 5 to round.\n" <<
		"Type in 6 to find the sine, cosine, or tangent.\nType in 7 in order to multiply by Pi.\nType in 8 to raise a number to a power.\n" <<
		"Type in 9 to find the square root of a number.\n";
	//naming variables
	int choice;
	double number1, number2;
	int number3;
	//switch statement
	cin >> choice;
	switch (choice)
	{
	case 1:// addition 
		cout << "Enter the two numbers you want to add.";
		cin >> number1 >> number2;
		cout << number1 << " plus " << number2 << " is " << number1 + number2 << ".";
		break;
	case 2://subtraction
		cout << "Enter the two numbers you want to subtract.";
		cin >> number1 >> number2;
		cout << number1 << " minus " << number2 << " is " << number1 - number2 << ".";
		break;
	case 3: //multiplication
		cout << "Enter the two numbers you want to multiply.";
		cin >> number1 >> number2;
		cout << number1 << " times " << number2 << " is " << number1 * number2 << ".";
		break;
	case 4://division
		cout << "Enter the two numbers you want to divide.";
		cin >> number1 >> number2;
		if (number2 == 0)
		{
			cout << "Do not enter a denominator which is zero.";
		}
		else
		{
			cout << number1 << " divided by " << number2 << " is " << number1 / number2 << ".";
		}
		break;
	case 5://rounding
		cout << "Type in 1 to round up, type in 2 to round down, or type in 3 to round to the nearest whole number.";
		cin >> number3;
		switch (number3)
		{
		case 1:  cout << "Enter the number you want to round up. ";
			cin >> number2;
			cout << number2 << " rounded up is " << ceil(number2) << ".";
			break;
		case 2:  cout << "Enter the number you want to round down.";
			cin >> number2;
			cout << number2 << " rounded down is " << floor(number2) << ".";
			break;
		case 3:  cout << "Enter the number you want to round.";
			cin >> number2;
			cout << number2 << " rounded to the nearest whole number is " << round(number2) << ".";
			break;
		default: cout << "Please enter a valid number";
			break;
		}
		break;
	case 6://trig
		cout << "Type in 1 to find the sine, type in 2 to find the cosine, or type in 3 to find the tangent.";
		cin >> number3;
		switch (number3)
		{
		case 1:  cout << "Enter the number you want to find the sine of. ";
			cin >> number2;
			cout << "\n The sine of " << number2 << " is " << setprecision(10) << fixed << sin(number2);
			break;
		case 2:  cout << "Enter the degree you want to find the cosine of. ";
			cin >> number2;
			cout << "\n The cosine of " << number2 << "  is " << setprecision(10) << fixed << cos(number2);
			break;
		case 3:  cout << "Enter the degree you want to find the tangent of. ";
			cin >> number2;
			cout << "\n The tangent of " << number2 << "  is " << setprecision(10) << fixed << tan(number2);
			break;
			break;
		default: cout << "Please enter a valid number";
			break;
		}
		break;
	case 7://multiply by Pi
		cout << "Enter the number you want to multiply by Pi.";
		cin >> number1;
		cout << number1 << " times Pi is " << setprecision(15) << fixed << number1 * 3.14159265358979323846 << ".";
		break;
	case 8://rasing numbers to a power
		cout << "Enter the number you want to raise and then enter which power you want to raise it to.";
		cin >> number1 >> number2;
		cout << number1 << " to the " << number2 << " power is " << pow(number1, number2) << ".";
		break;
	case 9: //square root of a number
		cout << "Enter the number you want to find the square root of. ";
		cin >> number1;
		cout << "The square root of " << number1 << " is " << sqrt(number1) << ".";
		break;
	default: cout << "Please enter a valid number.";
		break;
	}
	return 0;
}
