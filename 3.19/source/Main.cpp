#include <iostream>
using namespace std;

int main() {
	float principal, rate, interest,day;

	while (1) {
		cout << "Enter loan principal (-1 to end): ";
		cin >> principal;
		if (principal == -1) break;
		cout << "Enter interest rate: ";
		cin >> rate;
		cout << "Enter term of loan in day: ";
		cin >> day;
		interest = principal * rate*(day / 365.00);
		printf("The interest charge is $%.2f\n\n",interest);
	}
	
	return 0;
}