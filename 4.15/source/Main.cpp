#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	const double principal = 5000.0; // Initial investment
	const int years = 15; // Number of years

	// Interest rates to be calculated
	double interestRates[] = { 10.0, 10.5, 11.5, 12.0 };

	for (int i = 0; i < 4; i++) {
		double rate = interestRates[i] / 100; // Convert percentage to decimal
		double amount = 0;

		cout << "Interest Rate: " << interestRates[i] << "%" << endl;
		cout << "Year" << setw(20) << "Amount on deposit" << endl;

		for (int year = 1; year <= years; year++) {
			amount = principal * pow(1.0 + rate, year);
			cout << setw(4) << year << setw(20) << fixed << setprecision(2) << amount << endl;
		}

		cout << endl;
	}

	return 0;
}