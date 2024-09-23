
/*
File Name: Ch3Ex18_Katlyn_Winkelhake.cpp
Date: 9/23/2024
Programmer: Katlyn Winkelhake
Requirements:
Write a program that asks for the princple, interest rate, and the number of times interest is compounded.
It should display the report as shown in the example photo.
*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double principle;
	double interestRate;
	double interestTimes;
	double interest;
		interest = principle * pow(1 + (interestRate / interestTimes))(interestTimes);
	double newSavings;
		newSavings = principle + interest;


	cout << "What is your principle?" << endl;
		cin >> principle;

	cout << "What is your interest rate?" << endl;
		cin >> interestRate;

	cout << "How many times is your interest compounded in a year?" << endl;
		cin >> interestTimes;

	cout << setprecision(2) << showpoint << fixed;
	cout << "Interest Rate:" << setw(6) << "$" << interestRate;
	cout << "Times Compounded:" << setw(2) << interestTimes;
	cout << "Principle:" << setw(10) << "$" << principle;
	cout << "Interest:" << setw(11) << "$" << interest;
	cout << "Amount in Savings:" << setw(1) << "$" << newSavings;


	return 0;

}
