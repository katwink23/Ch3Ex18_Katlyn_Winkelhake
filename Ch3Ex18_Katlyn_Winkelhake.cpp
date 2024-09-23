
/*
File Name: Ch3Ex18_Katlyn_Winkelhake.cpp
Date: 9/23/2024
Programmer: Katlyn Winkelhake
Requirements:
Write a program that asks for the principal, interest rate, and the number of times interest is compounded.
It should display the report as shown in the example photo.
*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float principal;
	float interestRate;
	float totalInterest;
	int interestTimes;
	float interestYear;
	float newSavings;
		

	cout << "What is your principal?" << endl;
		cin >> principal;

	cout << "What is your interest rate? (in percent)" << endl;
		cin >> interestRate;

	cout << "How many times is your interest compounded in a year?" << endl;
		cin >> interestTimes;

	interestRate /= 100;
	interestYear = principal * pow((1 + interestRate / interestTimes), interestTimes);
	totalInterest = interestYear - principal;
	interestRate *= 100;

	cout << setprecision(2) << showpoint << fixed;
	cout << endl;
	cout << "Stats after a year:" << endl;
	cout << " _________________ " << endl;
	cout << endl;
	cout << "Interest Rate:" << setw(9) << interestRate << "%" << endl;
	cout << "Times Compounded:" << setw(3) << interestTimes << endl;
	cout << "Principal:" << setw(10) << "$" << principal << endl;
	cout << "Interest:" << setw(11) << "$" << totalInterest << endl;
	cout << "Amount in Savings:" << setw(2) << "$" << interestYear << endl;


	return 0;

}
