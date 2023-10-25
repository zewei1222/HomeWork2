#include <iostream>
using namespace std;

int main() {
	int acc;
	float  begin_balance, new_balance, charges, credits, limit;

	while (1) {

		cout << "Enter account number (-1 to end): ";
		cin >> acc;
		if (acc == -1) break;
		cout << "Enter beginning balance: ";
		cin >> begin_balance;
		cout << "Enter total charges: ";
		cin >> charges;
		cout << "Enter total credits: ";
		cin >> credits;
		cout << "Enter credit limit: ";
		cin >> limit;
		new_balance = begin_balance + charges - credits;

		if (new_balance > limit) {
			cout << "Account:	" << acc << endl;
			printf("Credit limit:\t%.2f\n", limit);
			cout << "Balance:\t"<< new_balance << endl;
			cout << "Credit Limit Exceeded."<<endl<<endl;
		}
		else {
			cout << endl;
		}
	}
	
	return 0;
}