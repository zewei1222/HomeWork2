#include <iostream>
using namespace std;

int main() {
	int code;
	
	while (1) {
		cout << "1 to manager\n2 to hourly worker\n3 to commission worker\n4 to pieceworker\n(-1 to end)\n";
		cin >> code;
		if (code == -1) break;

		switch (code) {
		case 1:
			int salary;
			cout << "Enter the weekly Salary (-1 to end): ";
			cin >> salary;
			if (salary == -1) break;
			cout << "Salary is: " << salary << endl;
			break;
		case 2:
			int hour;
			float rate;
			cout << "Enter # of hours worked (-1 to end): ";
			cin >> hour;
			if (hour == -1) break;
			cout << "Enter hourly rate of the worker ($00.00): ";
			cin >> rate;
			cout.precision(2);
			cout << fixed;
			cout << (hour > 40 ? (40 * rate + (hour - 40)*1.5*rate) : rate * hour) << endl;
			break;
		case 3:
			float sale;
			cout << "Enter gross weekly sales (-1 to end): ";
			cin >> sale;
			if (sale == -1) break;
			cout.precision(2);
			cout << fixed;
			cout << 250 + 0.057*sale << endl;
			break;
		case 4:
			int num;
			float price;
			cout << "Enter the number of products (-1 to end): ";
			cin >> num;
			if (num == -1) break;
			cout << "Enter earnings per product : ";
			cin >> price;
			cout.precision(2);
			cout << fixed;
			cout << num * price;
			break;
		default:
			cout << "pls enter a number between 1 and 4";
			break;
		}
	}
	return 0;
}